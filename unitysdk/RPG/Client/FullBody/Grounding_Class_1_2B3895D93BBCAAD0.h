#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class Grounding; }

#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_GET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x972EDF0)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_GET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x972EDC0)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x972EE10)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_METHOD_1_6F17B946E9471099_OFFSET UNITYSDK_OFFSET(0x9729410)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_METHOD_1_ADD003CF336D2AD7_OFFSET UNITYSDK_OFFSET(0x972A390)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x972AAF0)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_SET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x972EE00)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_SET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x972EDE0)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0__CTOR_OFFSET UNITYSDK_OFFSET(0x97292A0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounding_Class_1_2B3895D93BBCAAD0_TypeDefinitionIndex = 60902;

	class Grounding_Class_1_2B3895D93BBCAAD0 : public ::System::Object
	{
	public:
		::RPG::Client::FullBody::Grounding* Field_1_2; // 0x10
		::System::Single _heightOffset_k__BackingField; // 0x18
		::System::Single Field_1_6; // 0x1C
		::UnityEngine::Vector3 Field_1_3; // 0x20
		::System::Single Field_1_4; // 0x2C
		::System::Boolean Field_1_5; // 0x30
		::UnityEngine::Vector3 _IKOffset_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_IKOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_GET_IKOFFSET_OFFSET))(this);
		}

		::System::Void set_IKOffset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_SET_IKOFFSET_OFFSET))(this, value);
		}

		::System::Single get_heightOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_GET_HEIGHTOFFSET_OFFSET))(this);
		}

		::System::Void set_heightOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_SET_HEIGHTOFFSET_OFFSET))(this, value);
		}

		::System::Void Method_1_6F17B946E9471099(::RPG::Client::FullBody::Grounding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::Grounding*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_METHOD_1_6F17B946E9471099_OFFSET))(this, a1);
		}

		::System::Void Method_1_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_1_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_METHOD_1_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_1_ADD003CF336D2AD7(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_1_2B3895D93BBCAAD0_METHOD_1_ADD003CF336D2AD7_OFFSET))(this, a1, a2, a3);
		}
	};
}
