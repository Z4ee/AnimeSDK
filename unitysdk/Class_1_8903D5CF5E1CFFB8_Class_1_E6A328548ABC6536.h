#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8903D5CF5E1CFFB8_Struct_2_39C1980D6A4FBF81.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8903D5CF5E1CFFB8_Class_1_706EC61B395A9D16;
class Class_1_F5777EDD28DD1F39;
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }

#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_GET_ACCEPTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x16601580)
#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_GET_REGION_OFFSET UNITYSDK_OFFSET(0x16601570)
#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_METHOD_1_4306204376968EF0_OFFSET UNITYSDK_OFFSET(0x165FFA50)
#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_SET_ACCEPTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x166015A0)
#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536__CTOR_OFFSET UNITYSDK_OFFSET(0x165FEF80)

inline static constexpr unsigned int Class_1_8903D5CF5E1CFFB8_Class_1_E6A328548ABC6536_TypeDefinitionIndex = 48939;

class Class_1_8903D5CF5E1CFFB8_Class_1_E6A328548ABC6536 : public ::System::Object
{
public:
	::Class_1_8903D5CF5E1CFFB8_Class_1_706EC61B395A9D16* PJLHOKMKCCH; // 0x10
	::RPGTools::LDWhiteBox::WhiteBoxRegion* _Region_k__BackingField; // 0x18
	::Class_1_F5777EDD28DD1F39* COKOLPGMBFP; // 0x20
	::UnityEngine::Vector3 _AcceptedPosition_k__BackingField; // 0x28

	::System::Void _ctor(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536__CTOR_OFFSET))(this, a1, a2);
	}

	::RPGTools::LDWhiteBox::WhiteBoxRegion* get_Region()
	{
		return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_GET_REGION_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_AcceptedPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_GET_ACCEPTEDPOSITION_OFFSET))(this);
	}

	::System::Void set_AcceptedPosition(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_SET_ACCEPTEDPOSITION_OFFSET))(this, a1);
	}

	::System::Void Method_1_4306204376968EF0(::Class_1_8903D5CF5E1CFFB8_Struct_2_39C1980D6A4FBF81 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8903D5CF5E1CFFB8_Struct_2_39C1980D6A4FBF81))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_METHOD_1_4306204376968EF0_OFFSET))(this, a1);
	}
};
