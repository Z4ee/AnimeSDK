#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BezierProjectileData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4ADEA8C57AD01AAD_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xC4E8160)
#define CLASS_2_4ADEA8C57AD01AAD_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xC4E7FA0)
#define CLASS_2_4ADEA8C57AD01AAD_METHOD_2_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0xC4E7EB0)
#define CLASS_2_4ADEA8C57AD01AAD_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xC4E7BD0)
#define CLASS_2_4ADEA8C57AD01AAD_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC4E8100)
#define CLASS_2_4ADEA8C57AD01AAD_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0xC4E80D0)
#define CLASS_2_4ADEA8C57AD01AAD_METHOD_2_A678846DF98684D3_OFFSET UNITYSDK_OFFSET(0xC4E70F0)
#define CLASS_2_4ADEA8C57AD01AAD_METHOD_2_C8F1032C0AFB34EC_OFFSET UNITYSDK_OFFSET(0xC4E7500)
#define CLASS_2_4ADEA8C57AD01AAD_METHOD_2_FE1A1A30B3CE9C46_OFFSET UNITYSDK_OFFSET(0xC4E7DC0)
#define CLASS_2_4ADEA8C57AD01AAD__CTOR_OFFSET UNITYSDK_OFFSET(0xC4E7020)

inline static constexpr unsigned int Class_2_4ADEA8C57AD01AAD_TypeDefinitionIndex = 43803;

class Class_2_4ADEA8C57AD01AAD : public ::Class_1_1835888C1E19F013
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_3; // 0x48
	::RPG::GameCore::BezierProjectileData* Field_2_0; // 0x50
	::UnityEngine::Vector3 Field_2_1; // 0x58
	::UnityEngine::Vector3 Field_2_2; // 0x64

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEA8C57AD01AAD__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_A678846DF98684D3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEA8C57AD01AAD_METHOD_2_A678846DF98684D3_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEA8C57AD01AAD_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_FE1A1A30B3CE9C46(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4ADEA8C57AD01AAD_METHOD_2_FE1A1A30B3CE9C46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4ADEA8C57AD01AAD_METHOD_2_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEA8C57AD01AAD_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_C8F1032C0AFB34EC(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_4ADEA8C57AD01AAD_METHOD_2_C8F1032C0AFB34EC_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEA8C57AD01AAD_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEA8C57AD01AAD_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEA8C57AD01AAD_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}
};
