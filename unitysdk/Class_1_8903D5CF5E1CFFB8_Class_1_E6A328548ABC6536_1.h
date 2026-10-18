#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8903D5CF5E1CFFB8_Class_1_706EC61B395A9D16;
class Class_1_F5777EDD28DD1F39;
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }

#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_1_GET_ACCEPTEDSIZE_OFFSET UNITYSDK_OFFSET(0x166109F0)
#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_1_GET_REGION_OFFSET UNITYSDK_OFFSET(0x166109E0)
#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_1_METHOD_1_DFB45B03ABDF0E84_OFFSET UNITYSDK_OFFSET(0x165F6450)
#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_1_SET_ACCEPTEDSIZE_OFFSET UNITYSDK_OFFSET(0x16610A10)
#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_1__CTOR_OFFSET UNITYSDK_OFFSET(0x165F60A0)

inline static constexpr unsigned int Class_1_8903D5CF5E1CFFB8_Class_1_E6A328548ABC6536_1_TypeDefinitionIndex = 48938;

class Class_1_8903D5CF5E1CFFB8_Class_1_E6A328548ABC6536_1 : public ::System::Object
{
public:
	::RPGTools::LDWhiteBox::WhiteBoxRegion* _Region_k__BackingField; // 0x10
	::Class_1_F5777EDD28DD1F39* COKOLPGMBFP; // 0x18
	::Class_1_8903D5CF5E1CFFB8_Class_1_706EC61B395A9D16* PJLHOKMKCCH; // 0x20
	::UnityEngine::Vector3 _AcceptedSize_k__BackingField; // 0x28

	::System::Void _ctor(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPGTools::LDWhiteBox::WhiteBoxRegion* get_Region()
	{
		return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_1_GET_REGION_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_AcceptedSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_1_GET_ACCEPTEDSIZE_OFFSET))(this);
	}

	::System::Void set_AcceptedSize(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_1_SET_ACCEPTEDSIZE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFB45B03ABDF0E84(::UnityEngine::Vector3 a1, ::Class_1_F5777EDD28DD1F39* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_1_F5777EDD28DD1F39*))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_E6A328548ABC6536_1_METHOD_1_DFB45B03ABDF0E84_OFFSET))(this, a1, a2);
	}
};
