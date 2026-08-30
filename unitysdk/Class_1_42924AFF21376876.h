#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_6417078E6DA36F89;
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardAvatarViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardDetailItemBaseViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardServantViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class DoubleTeamViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class SingleTeamViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TripleTeamViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_42924AFF21376876_METHOD_1_006DD41109A79B95_OFFSET UNITYSDK_OFFSET(0x159EFC80)
#define CLASS_1_42924AFF21376876_METHOD_1_68BF16882ADE0914_1_OFFSET UNITYSDK_OFFSET(0x159F0930)
#define CLASS_1_42924AFF21376876_METHOD_1_68BF16882ADE0914_OFFSET UNITYSDK_OFFSET(0x159EFD90)
#define CLASS_1_42924AFF21376876_METHOD_1_7ECA84859184D70C_OFFSET UNITYSDK_OFFSET(0x159EF690)
#define CLASS_1_42924AFF21376876_METHOD_1_99A8835544FE3DBD_OFFSET UNITYSDK_OFFSET(0x159F08C0)
#define CLASS_1_42924AFF21376876_METHOD_1_A4863D7B7274C7C0_OFFSET UNITYSDK_OFFSET(0x159EFDF0)
#define CLASS_1_42924AFF21376876_METHOD_1_A4F96E5973F42156_OFFSET UNITYSDK_OFFSET(0x159EFB40)
#define CLASS_1_42924AFF21376876_METHOD_1_A526085D83471A46_OFFSET UNITYSDK_OFFSET(0x159F0730)
#define CLASS_1_42924AFF21376876_METHOD_1_AD3EAD18200DEA40_OFFSET UNITYSDK_OFFSET(0x159F0330)
#define CLASS_1_42924AFF21376876_METHOD_1_C03CB95144522F51_OFFSET UNITYSDK_OFFSET(0x159EFA30)
#define CLASS_1_42924AFF21376876_METHOD_1_D42EA04CB2156AC7_OFFSET UNITYSDK_OFFSET(0x159EF7F0)
#define CLASS_1_42924AFF21376876_METHOD_1_E0FE70E78BE3BCB4_OFFSET UNITYSDK_OFFSET(0x159F09A0)
#define CLASS_1_42924AFF21376876__CTOR_OFFSET UNITYSDK_OFFSET(0x159EF610)

inline static constexpr unsigned int Class_1_42924AFF21376876_TypeDefinitionIndex = 79469;

class Class_1_42924AFF21376876 : public ::System::Object
{
public:
	::Class_1_6417078E6DA36F89* HEJEGOGBFMP; // 0x10

	::System::Void _ctor(::Class_1_6417078E6DA36F89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6417078E6DA36F89*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* Method_1_7ECA84859184D70C(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876_METHOD_1_7ECA84859184D70C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* Method_1_D42EA04CB2156AC7(::RPG::Client::FateRin::CaseBoard::SingleTeamViewModel* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::SingleTeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876_METHOD_1_D42EA04CB2156AC7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* Method_1_C03CB95144522F51(::RPG::Client::FateRin::CaseBoard::DoubleTeamViewModel* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::DoubleTeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876_METHOD_1_C03CB95144522F51_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* Method_1_A4F96E5973F42156(::RPG::Client::FateRin::CaseBoard::TripleTeamViewModel* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TripleTeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876_METHOD_1_A4F96E5973F42156_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_006DD41109A79B95(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* a1, ::RPG::Client::FateRin::CaseBoard::TeamViewModel* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876_METHOD_1_006DD41109A79B95_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A526085D83471A46(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876_METHOD_1_A526085D83471A46_OFFSET))(a1);
	}

	::System::Void Method_1_A4863D7B7274C7C0(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* a1, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a2, ::System::String* a3, ::RPG::Client::TextID a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*, ::System::String*, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876_METHOD_1_A4863D7B7274C7C0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_AD3EAD18200DEA40(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* a1, ::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel* a2, ::System::String* a3, ::RPG::Client::TextID a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*, ::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel*, ::System::String*, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876_METHOD_1_AD3EAD18200DEA40_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_68BF16882ADE0914(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876_METHOD_1_68BF16882ADE0914_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_68BF16882ADE0914_1(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876_METHOD_1_68BF16882ADE0914_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_99A8835544FE3DBD(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876_METHOD_1_99A8835544FE3DBD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E0FE70E78BE3BCB4(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_42924AFF21376876_METHOD_1_E0FE70E78BE3BCB4_OFFSET))(a1);
	}
};
