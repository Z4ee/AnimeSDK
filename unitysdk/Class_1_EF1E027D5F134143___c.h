#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_EF1E027D5F134143___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x110FE600)
#define CLASS_1_EF1E027D5F134143___C__CTOR_OFFSET UNITYSDK_OFFSET(0x110FE640)
#define CLASS_1_EF1E027D5F134143___C__SATISFY_B__0_0_OFFSET UNITYSDK_OFFSET(0x110FE650)

inline static constexpr unsigned int Class_1_EF1E027D5F134143___c_TypeDefinitionIndex = 52703;

class Class_1_EF1E027D5F134143___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF1E027D5F134143___c_TypeDefinitionIndex)->GetStaticField(0x458B0);
	}
	static ::Class_1_EF1E027D5F134143___c** StaticGet___9()
	{
		return (::Class_1_EF1E027D5F134143___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF1E027D5F134143___c_TypeDefinitionIndex)->GetStaticField(0x458B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF1E027D5F134143___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1E027D5F134143___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Satisfy_b__0_0(::RPG::Client::GridFightEquipItemData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_1_EF1E027D5F134143___C__SATISFY_B__0_0_OFFSET))(this, x);
	}
};
