#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_16C4955EF2FA3814;
class Class_1_3E8412A97A3D0DF7_1_Class_1_593445AD730C3FF9;
class Class_1_680ABE7B0CC9E97F;
class Class_1_680ABE7B0CC9E97F_Class_1_761EFBF2608A1E3C;
class Class_1_E7C4615647E1695F;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentActorViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentDetailViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentDetailViewModel_Factory; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C35866DE18F0174D_METHOD_1_02EB2A0852B7A260_OFFSET UNITYSDK_OFFSET(0x1655EE70)
#define CLASS_1_C35866DE18F0174D_METHOD_1_1BD35AD326CE1BCE_OFFSET UNITYSDK_OFFSET(0x1655F9B0)
#define CLASS_1_C35866DE18F0174D_METHOD_1_202BD73CEFEC1A5A_OFFSET UNITYSDK_OFFSET(0x1655FCA0)
#define CLASS_1_C35866DE18F0174D_METHOD_1_C7726E2878EB0964_OFFSET UNITYSDK_OFFSET(0x16560140)
#define CLASS_1_C35866DE18F0174D_METHOD_1_EE2E3B8D80D18EF4_OFFSET UNITYSDK_OFFSET(0x1655FB80)
#define CLASS_1_C35866DE18F0174D_METHOD_1_FF712121B5FC21FF_OFFSET UNITYSDK_OFFSET(0x1655F7F0)
#define CLASS_1_C35866DE18F0174D__CTOR_OFFSET UNITYSDK_OFFSET(0x1655EE50)

inline static constexpr unsigned int Class_1_C35866DE18F0174D_TypeDefinitionIndex = 79767;

class Class_1_C35866DE18F0174D : public ::System::Object
{
public:
	::Class_1_16C4955EF2FA3814* GKPHGLBPCKD; // 0x10
	::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel_Factory* OOBELGDLFNK; // 0x18
	::Class_1_680ABE7B0CC9E97F_Class_1_761EFBF2608A1E3C* BAPFPEGJJHP; // 0x20
	::Class_1_3E8412A97A3D0DF7_1_Class_1_593445AD730C3FF9* NDEOLJBEHDM; // 0x28

	::System::Void _ctor(::Class_1_16C4955EF2FA3814* a1, ::Class_1_680ABE7B0CC9E97F_Class_1_761EFBF2608A1E3C* a2, ::Class_1_3E8412A97A3D0DF7_1_Class_1_593445AD730C3FF9* a3, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel_Factory* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_16C4955EF2FA3814*, ::Class_1_680ABE7B0CC9E97F_Class_1_761EFBF2608A1E3C*, ::Class_1_3E8412A97A3D0DF7_1_Class_1_593445AD730C3FF9*, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel_Factory*))((::PBYTE)hIl2Cpp + CLASS_1_C35866DE18F0174D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_02EB2A0852B7A260(::System::Func_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*>* a1, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*>* a2, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a3, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>* a4, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*>*, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*>*, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_C35866DE18F0174D_METHOD_1_02EB2A0852B7A260_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::Class_1_680ABE7B0CC9E97F*>* Method_1_202BD73CEFEC1A5A(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1, ::Class_1_E7C4615647E1695F* a2, ::System::UInt32 a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_680ABE7B0CC9E97F*>*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::Class_1_E7C4615647E1695F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C35866DE18F0174D_METHOD_1_202BD73CEFEC1A5A_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::TextID Method_1_EE2E3B8D80D18EF4(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1, ::Class_1_E7C4615647E1695F* a2)
	{
		return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::Class_1_E7C4615647E1695F*))((::PBYTE)hIl2Cpp + CLASS_1_C35866DE18F0174D_METHOD_1_EE2E3B8D80D18EF4_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* Method_1_C7726E2878EB0964(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1, ::Class_1_E7C4615647E1695F* a2)
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::Class_1_E7C4615647E1695F*))((::PBYTE)hIl2Cpp + CLASS_1_C35866DE18F0174D_METHOD_1_C7726E2878EB0964_OFFSET))(this, a1, a2);
	}

	::Class_1_E7C4615647E1695F* Method_1_FF712121B5FC21FF(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>* a2)
	{
		return ((::Class_1_E7C4615647E1695F*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>*))((::PBYTE)hIl2Cpp + CLASS_1_C35866DE18F0174D_METHOD_1_FF712121B5FC21FF_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* Method_1_1BD35AD326CE1BCE(::Class_1_E7C4615647E1695F* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>* a2)
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*(*)(::PVOID, ::Class_1_E7C4615647E1695F*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_C35866DE18F0174D_METHOD_1_1BD35AD326CE1BCE_OFFSET))(this, a1, a2);
	}
};
