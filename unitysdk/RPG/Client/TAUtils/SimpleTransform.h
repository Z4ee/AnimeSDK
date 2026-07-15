#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TAUTILS_SIMPLETRANSFORM_GET_INIT_OFFSET UNITYSDK_OFFSET(0x1975E650)
#define RPG_CLIENT_TAUTILS_SIMPLETRANSFORM_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x39D7990)
#define RPG_CLIENT_TAUTILS_SIMPLETRANSFORM_METHOD_2_9CF53A5EC24635E8_OFFSET UNITYSDK_OFFSET(0x1975E2F0)
#define RPG_CLIENT_TAUTILS_SIMPLETRANSFORM_METHOD_2_B4611E438AF47B36_OFFSET UNITYSDK_OFFSET(0x39D79B0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int SimpleTransform_TypeDefinitionIndex = 70234;

	struct alignas(4) SimpleTransform
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 rotation; // 0x1C
		::UnityEngine::Vector3 scale; // 0x28

		/*
		::UnityEngine::Matrix4x4 get_matrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_SIMPLETRANSFORM_GET_MATRIX_OFFSET))(this);
		}
		*/

		static ::RPG::Client::TAUtils::SimpleTransform Method_2_9CF53A5EC24635E8(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::TAUtils::SimpleTransform(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_SIMPLETRANSFORM_METHOD_2_9CF53A5EC24635E8_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TAUtils::SimpleTransform get_init()
		{
			return ((::RPG::Client::TAUtils::SimpleTransform(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_SIMPLETRANSFORM_GET_INIT_OFFSET))();
		}

		/*
		::RPG::Client::TAUtils::QuaternionTransform Method_2_B4611E438AF47B36()
		{
			return ((::RPG::Client::TAUtils::QuaternionTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_SIMPLETRANSFORM_METHOD_2_B4611E438AF47B36_OFFSET))(this);
		}
		*/
	};
}
