#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1343;
class Class_0_16E4307DCC419505_1344;
class Class_0_16E4307DCC419505_1361;
class Class_1_5060AE803DAE1512;
class Class_1_6F4CEA512F531AE2;
class Class_1_97F9E33E53026E4C;
class Class_1_B6441625E3D7D3E0;
class Class_1_C85C4DAB350DD5FC_2;
class Class_1_D04575A520F91692;
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DFAFE4643C70707A_METHOD_1_11E23947F0676236_OFFSET UNITYSDK_OFFSET(0x163773A0)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_146B82294136F2AB_OFFSET UNITYSDK_OFFSET(0x16377CC0)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16376CB0)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_259211A2EC5ADB0D_OFFSET UNITYSDK_OFFSET(0x16377C00)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_356ABAEE5BA225E6_OFFSET UNITYSDK_OFFSET(0x16376760)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_38C3D0AC3EE745A3_OFFSET UNITYSDK_OFFSET(0x16377020)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x16374F70)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_49FB02306DA841AC_OFFSET UNITYSDK_OFFSET(0x163775D0)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_4F6ADC22FECA8414_OFFSET UNITYSDK_OFFSET(0x16376D10)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x163787F0)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_59D9069E39FC78DB_OFFSET UNITYSDK_OFFSET(0x16377250)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_683DFAE7E82DDBDB_OFFSET UNITYSDK_OFFSET(0x16374FD0)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_6F79DF9E89039421_OFFSET UNITYSDK_OFFSET(0x16377E60)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x16375330)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0x16378A70)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_93456CA503FCF8F4_OFFSET UNITYSDK_OFFSET(0x163772C0)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x16376990)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_A2FECA576332B43B_OFFSET UNITYSDK_OFFSET(0x16376BA0)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_AF4E83C3893A9F6A_OFFSET UNITYSDK_OFFSET(0x16375230)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_B691D9BB492BD50C_OFFSET UNITYSDK_OFFSET(0x16376A70)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_BB3B5CB275AC3ED1_OFFSET UNITYSDK_OFFSET(0x16375080)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_C2C229B4ABA9CBC2_OFFSET UNITYSDK_OFFSET(0x163759F0)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_C36CF11F898C9FDC_OFFSET UNITYSDK_OFFSET(0x163788F0)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_D3B330E20BB51086_OFFSET UNITYSDK_OFFSET(0x16378010)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_DB009E688B02FC97_OFFSET UNITYSDK_OFFSET(0x16377F30)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_DF7690E93482E0FF_OFFSET UNITYSDK_OFFSET(0x163777E0)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_E0611EB9D4262ACA_OFFSET UNITYSDK_OFFSET(0x16377950)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_F140C81F7FC72D9F_OFFSET UNITYSDK_OFFSET(0x16377FC0)
#define CLASS_1_DFAFE4643C70707A_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x16377900)
#define CLASS_1_DFAFE4643C70707A__CTOR_OFFSET UNITYSDK_OFFSET(0x16374D30)

inline static constexpr unsigned int Class_1_DFAFE4643C70707A_TypeDefinitionIndex = 79411;

class Class_1_DFAFE4643C70707A : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1344* HNLOJEIEFKC; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* FLCPLKJPFDI; // 0x18
	::Class_0_16E4307DCC419505_1343* PODJBLOPDAK; // 0x20
	::Class_1_D04575A520F91692* CFJDEEEHHPJ; // 0x28
	::Class_1_97F9E33E53026E4C* GCNNDHCLBPI; // 0x30
	::Class_0_16E4307DCC419505_1361* OHGKKINKOPH; // 0x38
	::Class_1_5060AE803DAE1512* CBMBBIGFPOG; // 0x40

	::System::Void _ctor(::Class_1_5060AE803DAE1512* a1, ::Class_0_16E4307DCC419505_1344* a2, ::Class_1_97F9E33E53026E4C* a3, ::Class_0_16E4307DCC419505_1343* a4, ::Class_0_16E4307DCC419505_1361* a5, ::Class_1_D04575A520F91692* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5060AE803DAE1512*, ::Class_0_16E4307DCC419505_1344*, ::Class_1_97F9E33E53026E4C*, ::Class_0_16E4307DCC419505_1343*, ::Class_0_16E4307DCC419505_1361*, ::Class_1_D04575A520F91692*))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Boolean Method_1_683DFAE7E82DDBDB(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_683DFAE7E82DDBDB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BB3B5CB275AC3ED1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_BB3B5CB275AC3ED1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AF4E83C3893A9F6A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_AF4E83C3893A9F6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_B6441625E3D7D3E0*>* Method_1_356ABAEE5BA225E6()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_B6441625E3D7D3E0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_356ABAEE5BA225E6_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_C85C4DAB350DD5FC_2*>* Method_1_C2C229B4ABA9CBC2()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_C85C4DAB350DD5FC_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_C2C229B4ABA9CBC2_OFFSET))(this);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Boolean Method_1_B691D9BB492BD50C(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_B691D9BB492BD50C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2FECA576332B43B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_A2FECA576332B43B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_38C3D0AC3EE745A3()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_38C3D0AC3EE745A3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>* Method_1_4F6ADC22FECA8414()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_4F6ADC22FECA8414_OFFSET))(this);
	}

	::System::Boolean Method_1_59D9069E39FC78DB(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_59D9069E39FC78DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_49FB02306DA841AC(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_49FB02306DA841AC_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_FD6692A5F6B0AC0C_OFFSET))();
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_E0611EB9D4262ACA()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_E0611EB9D4262ACA_OFFSET))(this);
	}

	::System::Boolean Method_1_11E23947F0676236(::RPG::GameCore::FateRinCaseBoardTeamType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_11E23947F0676236_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DF7690E93482E0FF(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_DF7690E93482E0FF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_259211A2EC5ADB0D(::RPG::GameCore::FateRinCaseBoardTeamType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_259211A2EC5ADB0D_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_146B82294136F2AB(::Class_1_6F4CEA512F531AE2* a1)
	{
		return ((::System::Boolean(*)(::Class_1_6F4CEA512F531AE2*))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_146B82294136F2AB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6F79DF9E89039421(::Class_1_6F4CEA512F531AE2* a1)
	{
		return ((::System::Boolean(*)(::Class_1_6F4CEA512F531AE2*))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_6F79DF9E89039421_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_93456CA503FCF8F4(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_93456CA503FCF8F4_OFFSET))(a1);
	}

	::System::String* Method_1_DB009E688B02FC97()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_DB009E688B02FC97_OFFSET))(this);
	}

	::System::String* Method_1_D3B330E20BB51086(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_D3B330E20BB51086_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::System::Boolean Method_1_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_8A2AC7CD7EA66CAC_OFFSET))(this);
	}

	::System::Boolean Method_1_C36CF11F898C9FDC(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_C36CF11F898C9FDC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* Method_1_F140C81F7FC72D9F()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAFE4643C70707A_METHOD_1_F140C81F7FC72D9F_OFFSET))(this);
	}
};
