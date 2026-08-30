#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_A8BD69BBCFA191B1;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGMANAGERMONO__CTOR_OFFSET UNITYSDK_OFFSET(0xCDAB100)

namespace RPG::Client::DynamicFloatingObject
{
	inline static constexpr unsigned int DynamicFloatingManagerMono_TypeDefinitionIndex = 73464;

	class DynamicFloatingManagerMono : public ::RPG::Client::TAMonoPlugin_1<::Class_3_A8BD69BBCFA191B1*>
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* obj; // 0x30
		::System::Boolean enableIt; // 0x38
		::System::Boolean disableIt; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGMANAGERMONO__CTOR_OFFSET))(this);
		}
	};
}
