#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2860A093D0C9EE46_Class_1_9A90CD018E72DF20_23;
namespace R3 { template <typename T> class Observable_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD61C900)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD61C940)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C___BIND_B__24_0_OFFSET UNITYSDK_OFFSET(0xD61C950)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C___BIND_B__24_1_OFFSET UNITYSDK_OFFSET(0xD61C9C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftEditingChipPieceControl___c_TypeDefinitionIndex = 79891;

	class MechCraftCraftEditingChipPieceControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MechCraft::View::MechCraftCraftEditingChipPieceControl___c** StaticGet___9()
		{
			return (::RPG::Client::MechCraft::View::MechCraftCraftEditingChipPieceControl___c**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCraftEditingChipPieceControl___c_TypeDefinitionIndex)->GetStaticField(0x48A00);
		}
		static ::System::Func_2<::Class_1_2860A093D0C9EE46_Class_1_9A90CD018E72DF20_23*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::Class_1_2860A093D0C9EE46_Class_1_9A90CD018E72DF20_23*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCraftEditingChipPieceControl___c_TypeDefinitionIndex)->GetStaticField(0x48A08);
		}
		static ::System::Func_2<::Class_1_2860A093D0C9EE46_Class_1_9A90CD018E72DF20_23*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::Class_1_2860A093D0C9EE46_Class_1_9A90CD018E72DF20_23*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCraftEditingChipPieceControl___c_TypeDefinitionIndex)->GetStaticField(0x48A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __Bind_b__24_0(::Class_1_2860A093D0C9EE46_Class_1_9A90CD018E72DF20_23* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2860A093D0C9EE46_Class_1_9A90CD018E72DF20_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C___BIND_B__24_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Bind_b__24_1(::Class_1_2860A093D0C9EE46_Class_1_9A90CD018E72DF20_23* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_1_2860A093D0C9EE46_Class_1_9A90CD018E72DF20_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C___BIND_B__24_1_OFFSET))(this, a1);
		}
	};
}
