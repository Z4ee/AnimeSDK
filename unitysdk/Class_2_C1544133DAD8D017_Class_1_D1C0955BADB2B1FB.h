#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_11A6C6850BA04D5F;
namespace MoleMole { class MonoRenderHandler; }

#define CLASS_2_C1544133DAD8D017_CLASS_1_D1C0955BADB2B1FB_METHOD_1_D1D6B8EE1D04EF69_OFFSET UNITYSDK_OFFSET(0x12BBAD70)
#define CLASS_2_C1544133DAD8D017_CLASS_1_D1C0955BADB2B1FB__CTOR_OFFSET UNITYSDK_OFFSET(0x12BBAD60)

inline static constexpr unsigned int Class_2_C1544133DAD8D017_Class_1_D1C0955BADB2B1FB_TypeDefinitionIndex = 65892;

class Class_2_C1544133DAD8D017_Class_1_D1C0955BADB2B1FB : public ::System::Object
{
public:
	::MoleMole::MonoRenderHandler* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_CLASS_1_D1C0955BADB2B1FB__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D1D6B8EE1D04EF69(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_11A6C6850BA04D5F*> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_11A6C6850BA04D5F*>))((::PBYTE)hIl2Cpp + CLASS_2_C1544133DAD8D017_CLASS_1_D1C0955BADB2B1FB_METHOD_1_D1D6B8EE1D04EF69_OFFSET))(this, a1);
	}
};
