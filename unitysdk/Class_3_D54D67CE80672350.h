#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_D54D67CE80672350_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14E30C40)
#define CLASS_3_D54D67CE80672350_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14E30F50)
#define CLASS_3_D54D67CE80672350_METHOD_3_FCA7C739F8E5F729_OFFSET UNITYSDK_OFFSET(0x14E30D10)
#define CLASS_3_D54D67CE80672350__CTOR_OFFSET UNITYSDK_OFFSET(0x14E30E60)

inline static constexpr unsigned int Class_3_D54D67CE80672350_TypeDefinitionIndex = 63990;

class Class_3_D54D67CE80672350 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_0; // 0x18
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D54D67CE80672350__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D54D67CE80672350_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_FCA7C739F8E5F729(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_D54D67CE80672350_METHOD_3_FCA7C739F8E5F729_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D54D67CE80672350_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
