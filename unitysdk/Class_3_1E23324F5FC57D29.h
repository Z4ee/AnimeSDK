#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_3B1EA953A4067E26;
class Class_1_A92BC063ED2379EB;
class Class_1_FB3E7B71A45FEB7C;
class Class_2_B66C1067C0468FBB;
class Class_2_FB9CF047C8AEAA83;
class Class_3_E6ABB31B8050F1C6;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1E23324F5FC57D29_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x15868E30)
#define CLASS_3_1E23324F5FC57D29_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x15868DD0)
#define CLASS_3_1E23324F5FC57D29_METHOD_3_A167BF524D7DB809_1_OFFSET UNITYSDK_OFFSET(0x158691F0)
#define CLASS_3_1E23324F5FC57D29_METHOD_3_A167BF524D7DB809_OFFSET UNITYSDK_OFFSET(0x15868E90)
#define CLASS_3_1E23324F5FC57D29__CTOR_OFFSET UNITYSDK_OFFSET(0x158694A0)

inline static constexpr unsigned int Class_3_1E23324F5FC57D29_TypeDefinitionIndex = 77009;

class Class_3_1E23324F5FC57D29 : public ::Class_2_75E63034C2ED40FA
{
public:
	::Class_1_FB3E7B71A45FEB7C* DBJJLAGHKFE; // 0x10
	::Class_2_FB9CF047C8AEAA83* EEFMDEHLLFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E23324F5FC57D29__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_E6ABB31B8050F1C6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E6ABB31B8050F1C6*))((::PBYTE)hIl2Cpp + CLASS_3_1E23324F5FC57D29_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Void Method_3_097468641FDED14E(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_3_1E23324F5FC57D29_METHOD_3_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A167BF524D7DB809(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1E23324F5FC57D29_METHOD_3_A167BF524D7DB809_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_A167BF524D7DB809_1(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1E23324F5FC57D29_METHOD_3_A167BF524D7DB809_1_OFFSET))(this, a1, a2, a3);
	}
};
