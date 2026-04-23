#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CustomLineProcedural_Struct_2_E36BFA641C5D2AAB.h"
#include "unitysdk/RPG/Client/CustomLineType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_AWAKE_OFFSET UNITYSDK_OFFSET(0xA0EC180)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_7B411317D337F87A_1_OFFSET UNITYSDK_OFFSET(0xA0ED900)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0xA0ED0D0)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_8336E89DF737C001_OFFSET UNITYSDK_OFFSET(0xA0ECC20)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_95288ADC9C10D154_OFFSET UNITYSDK_OFFSET(0xA0EC430)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_B50CA01B5EDC1228_OFFSET UNITYSDK_OFFSET(0xA0EE3D0)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_E4F0C07FA0B569BB_OFFSET UNITYSDK_OFFSET(0xA0EE4C0)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_F2BB8CA4A5596DD6_OFFSET UNITYSDK_OFFSET(0xA0EE110)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_REBUILDLINE_OFFSET UNITYSDK_OFFSET(0xA0EC250)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_UPDATEPOINTS_OFFSET UNITYSDK_OFFSET(0xA0EC2E0)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL__CTOR_OFFSET UNITYSDK_OFFSET(0xA0EE830)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomLineProcedural_TypeDefinitionIndex = 64899;

	class CustomLineProcedural : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_5_9()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(CustomLineProcedural_TypeDefinitionIndex)->GetStaticField(0x613E0);
		}
		::Il2CppArray<::UnityEngine::LineRenderer*>* Lines; // 0x18
		::RPG::Client::CustomLineType LineType; // 0x20
		::System::Boolean UseWorldSpace; // 0x24
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Points; // 0x28
		::UnityEngine::Vector3 PointOffset; // 0x30
		::System::Int32 InterpolationCount; // 0x3C
		::System::Int32 CtrlPointCount; // 0x40
		::UnityEngine::Transform* EndNode; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::CustomLineProcedural_Struct_2_E36BFA641C5D2AAB>* Field_5_8; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_AWAKE_OFFSET))(this);
		}

		::System::Void UpdatePoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_UPDATEPOINTS_OFFSET))(this, a1);
		}

		::System::Void RebuildLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_REBUILDLINE_OFFSET))(this);
		}

		::System::Boolean Method_5_95288ADC9C10D154()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_95288ADC9C10D154_OFFSET))(this);
		}

		::System::Void Method_5_F2BB8CA4A5596DD6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_F2BB8CA4A5596DD6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_B50CA01B5EDC1228()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_B50CA01B5EDC1228_OFFSET))(this);
		}

		::System::Void Method_5_8336E89DF737C001()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_8336E89DF737C001_OFFSET))(this);
		}

		::System::Void Method_5_7B411317D337F87A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_7B411317D337F87A_OFFSET))(this);
		}

		::System::Void Method_5_7B411317D337F87A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_7B411317D337F87A_1_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 Method_5_E4F0C07FA0B569BB(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_METHOD_5_E4F0C07FA0B569BB_OFFSET))(a1, a2, a3, a4);
		}
	};
}
