#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_494BD190B553B399;
class Class_1_4F5CE5715D025883;
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_780A90B30E361129_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB264390)
#define CLASS_1_780A90B30E361129_METHOD_1_0284BE40A5296070_OFFSET UNITYSDK_OFFSET(0xB262D90)
#define CLASS_1_780A90B30E361129_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB263AF0)
#define CLASS_1_780A90B30E361129_METHOD_1_1DFEF39AF60D9D0A_OFFSET UNITYSDK_OFFSET(0xB2640C0)
#define CLASS_1_780A90B30E361129_METHOD_1_2993B88DED966D40_OFFSET UNITYSDK_OFFSET(0xB263730)
#define CLASS_1_780A90B30E361129_METHOD_1_323533D3CEBEEC13_OFFSET UNITYSDK_OFFSET(0xB2635E0)
#define CLASS_1_780A90B30E361129_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xB2633E0)
#define CLASS_1_780A90B30E361129_METHOD_1_503CD42A0C349327_1_OFFSET UNITYSDK_OFFSET(0xB2642D0)
#define CLASS_1_780A90B30E361129_METHOD_1_503CD42A0C349327_OFFSET UNITYSDK_OFFSET(0xB264210)
#define CLASS_1_780A90B30E361129_METHOD_1_535E07E6C1493C3A_OFFSET UNITYSDK_OFFSET(0xB263DA0)
#define CLASS_1_780A90B30E361129_METHOD_1_80A42469C6EF2ED6_OFFSET UNITYSDK_OFFSET(0xB263C20)
#define CLASS_1_780A90B30E361129_METHOD_1_E79EF21F0A1F4065_OFFSET UNITYSDK_OFFSET(0xB263B50)
#define CLASS_1_780A90B30E361129__CTOR_OFFSET UNITYSDK_OFFSET(0xB262BA0)

inline static constexpr unsigned int Class_1_780A90B30E361129_TypeDefinitionIndex = 60531;

class Class_1_780A90B30E361129 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_494BD190B553B399*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_494BD190B553B399*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NormDistanceLodTemplate*>* Field_1_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_494BD190B553B399*>* Field_1_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_4F5CE5715D025883*>* Field_1_3; // 0x30
	::RPG::GameCore::StageLodMapConfig* Field_1_4; // 0x38
	::RPG::GameCore::StageLodMapConfig* Field_1_5; // 0x40
	::System::Boolean Field_1_7; // 0x48

	::System::Void _ctor(::RPG::GameCore::StageLodMapConfig* a1, ::RPG::GameCore::StageLodMapConfig* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageLodMapConfig*, ::RPG::GameCore::StageLodMapConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0284BE40A5296070(::RPG::GameCore::LodConfig* a1, ::RPG::GameCore::LodConfig* a2, ::RPG::GameCore::LodConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::LodConfig*))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129_METHOD_1_0284BE40A5296070_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2993B88DED966D40(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129_METHOD_1_2993B88DED966D40_OFFSET))(this, a1);
	}

	::System::Void Method_1_323533D3CEBEEC13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129_METHOD_1_323533D3CEBEEC13_OFFSET))(this);
	}

	::Class_1_494BD190B553B399* Method_1_E79EF21F0A1F4065(::System::String* a1)
	{
		return ((::Class_1_494BD190B553B399*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129_METHOD_1_E79EF21F0A1F4065_OFFSET))(this, a1);
	}

	::System::String* Method_1_80A42469C6EF2ED6(::RPG::GameCore::StagePrefabInfo* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::StagePrefabInfo*))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129_METHOD_1_80A42469C6EF2ED6_OFFSET))(this, a1);
	}

	::Class_1_494BD190B553B399* Method_1_535E07E6C1493C3A(::RPG::GameCore::StagePrefabInfo* a1)
	{
		return ((::Class_1_494BD190B553B399*(*)(::PVOID, ::RPG::GameCore::StagePrefabInfo*))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129_METHOD_1_535E07E6C1493C3A_OFFSET))(this, a1);
	}

	::Class_1_494BD190B553B399* Method_1_1DFEF39AF60D9D0A(::System::String* a1, ::System::Single a2)
	{
		return ((::Class_1_494BD190B553B399*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129_METHOD_1_1DFEF39AF60D9D0A_OFFSET))(this, a1, a2);
	}

	::Class_1_494BD190B553B399* Method_1_503CD42A0C349327(::System::String* a1)
	{
		return ((::Class_1_494BD190B553B399*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129_METHOD_1_503CD42A0C349327_OFFSET))(this, a1);
	}

	::Class_1_494BD190B553B399* Method_1_503CD42A0C349327_1(::System::String* a1)
	{
		return ((::Class_1_494BD190B553B399*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129_METHOD_1_503CD42A0C349327_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_780A90B30E361129_DISPOSE_OFFSET))(this);
	}
};
