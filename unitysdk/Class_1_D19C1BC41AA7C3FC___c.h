#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_D19C1BC41AA7C3FC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F16A50)
#define CLASS_1_D19C1BC41AA7C3FC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F16A90)
#define CLASS_1_D19C1BC41AA7C3FC___C__IMPORTCURGAMESESSIONDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x18F16AA0)

inline static constexpr unsigned int Class_1_D19C1BC41AA7C3FC___c_TypeDefinitionIndex = 61774;

class Class_1_D19C1BC41AA7C3FC___c : public ::System::Object
{
public:
	static ::Class_1_D19C1BC41AA7C3FC___c** StaticGet___9()
	{
		return (::Class_1_D19C1BC41AA7C3FC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D19C1BC41AA7C3FC___c_TypeDefinitionIndex)->GetStaticField(0x5DEB0);
	}
	static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D19C1BC41AA7C3FC___c_TypeDefinitionIndex)->GetStaticField(0x5DEB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D19C1BC41AA7C3FC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D19C1BC41AA7C3FC___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _ImportCurGameSessionData_b__10_0(::RPG::Client::GridFightEquipItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_1_D19C1BC41AA7C3FC___C__IMPORTCURGAMESESSIONDATA_B__10_0_OFFSET))(this, a1);
	}
};
