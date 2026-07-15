#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_0B593D18776350D6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CA6430)
#define CLASS_1_0B593D18776350D6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA6470)
#define CLASS_1_0B593D18776350D6___C__GETEQUIPMENTPROPERTYLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0x16CA6500)
#define CLASS_1_0B593D18776350D6___C___TOPROPERTYMODIFYDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x16CA6480)

inline static constexpr unsigned int Class_1_0B593D18776350D6___c_TypeDefinitionIndex = 69914;

class Class_1_0B593D18776350D6___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::RtPropertyModifyData>** StaticGet___9__11_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::RtPropertyModifyData>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B593D18776350D6___c_TypeDefinitionIndex)->GetStaticField(0x3E20);
	}
	static ::System::Comparison_1<::RPG::GameCore::RtPropertyModifyData>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::RtPropertyModifyData>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B593D18776350D6___c_TypeDefinitionIndex)->GetStaticField(0x3E28);
	}
	static ::Class_1_0B593D18776350D6___c** StaticGet___9()
	{
		return (::Class_1_0B593D18776350D6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B593D18776350D6___c_TypeDefinitionIndex)->GetStaticField(0x3E30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B593D18776350D6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B593D18776350D6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ToPropertyModifyData_b__10_0(::RPG::GameCore::RtPropertyModifyData a1, ::RPG::GameCore::RtPropertyModifyData a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RtPropertyModifyData, ::RPG::GameCore::RtPropertyModifyData))((::PBYTE)hIl2Cpp + CLASS_1_0B593D18776350D6___C___TOPROPERTYMODIFYDATA_B__10_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 _GetEquipmentPropertyList_b__11_0(::RPG::GameCore::RtPropertyModifyData a1, ::RPG::GameCore::RtPropertyModifyData a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RtPropertyModifyData, ::RPG::GameCore::RtPropertyModifyData))((::PBYTE)hIl2Cpp + CLASS_1_0B593D18776350D6___C__GETEQUIPMENTPROPERTYLIST_B__11_0_OFFSET))(this, a1, a2);
	}
};
