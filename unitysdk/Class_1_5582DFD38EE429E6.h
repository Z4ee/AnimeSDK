#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_0574DA6BF5DF5E24;
class Class_1_0DE8633F2A3A7AF4;
class Class_1_3B1EA953A4067E26;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_8AFABE97DEF4F04F;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelBuffConfig; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5582DFD38EE429E6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1066B230)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_03CB10E6306D7833_OFFSET UNITYSDK_OFFSET(0x1066CA50)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0x1066C2B0)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_25A06018317D6AA7_OFFSET UNITYSDK_OFFSET(0x1066D300)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_404925E362CCE110_OFFSET UNITYSDK_OFFSET(0x1066D860)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_5A3DB76D79A213D6_OFFSET UNITYSDK_OFFSET(0x1066CD00)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_5B7C155059E24698_OFFSET UNITYSDK_OFFSET(0x1066DB40)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_5C2158E850B02732_OFFSET UNITYSDK_OFFSET(0x1066B510)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_5FFCE8F719FB9475_OFFSET UNITYSDK_OFFSET(0x1066B700)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_737CFFD8D00BF158_OFFSET UNITYSDK_OFFSET(0x1066B690)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x1066B3B0)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_801FC94FF441F3AA_OFFSET UNITYSDK_OFFSET(0x1066C890)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_8B37A17B7A3F06D8_OFFSET UNITYSDK_OFFSET(0x1066CBD0)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_AE61036DE362328F_OFFSET UNITYSDK_OFFSET(0x1066C380)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_B9D890D17558608F_OFFSET UNITYSDK_OFFSET(0x1066C670)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_C114F069682DDFEE_OFFSET UNITYSDK_OFFSET(0x1066D630)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_C1A8BB17DF883CCA_OFFSET UNITYSDK_OFFSET(0x1066E270)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_CDF67B2B48C596E7_OFFSET UNITYSDK_OFFSET(0x1066E1E0)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_D5831134199AB129_OFFSET UNITYSDK_OFFSET(0x1066C150)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_DB2FB37219490EBB_OFFSET UNITYSDK_OFFSET(0x1066B280)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_DE7741DA58DA5469_OFFSET UNITYSDK_OFFSET(0x1066DC70)
#define CLASS_1_5582DFD38EE429E6_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x1066BF80)
#define CLASS_1_5582DFD38EE429E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1066B210)

inline static constexpr unsigned int Class_1_5582DFD38EE429E6_TypeDefinitionIndex = 62961;

class Class_1_5582DFD38EE429E6 : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26* Field_1_0; // 0x10
	::Class_3_8AFABE97DEF4F04F* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_3B1EA953A4067E26* a1, ::Class_1_0DE8633F2A3A7AF4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*, ::Class_1_0DE8633F2A3A7AF4*))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DB2FB37219490EBB(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_DB2FB37219490EBB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_1_5C2158E850B02732()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_5C2158E850B02732_OFFSET))(this);
	}

	::System::Void Method_1_737CFFD8D00BF158(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_737CFFD8D00BF158_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_1_D5831134199AB129()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_D5831134199AB129_OFFSET))(this);
	}

	::System::Void Method_1_1B9BAFE25893B138()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_1B9BAFE25893B138_OFFSET))(this);
	}

	::System::Void Method_1_AE61036DE362328F(::System::UInt32 a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_AE61036DE362328F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5FFCE8F719FB9475(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_5FFCE8F719FB9475_OFFSET))(this, a1);
	}

	::System::Void Method_1_03CB10E6306D7833(::RPG::GameCore::ChimeraDuelTeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_03CB10E6306D7833_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B37A17B7A3F06D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_8B37A17B7A3F06D8_OFFSET))(this);
	}

	::System::Boolean Method_1_B9D890D17558608F(::Class_2_49CAB3DE74280C58* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_B9D890D17558608F_OFFSET))(this, a1, a2);
	}

	::Class_2_49CAB3DE74280C58* Method_1_5A3DB76D79A213D6(::System::UInt32 a1, ::Class_2_49CAB3DE74280C58* a2)
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID, ::System::UInt32, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_5A3DB76D79A213D6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_801FC94FF441F3AA(::Class_2_49CAB3DE74280C58* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_801FC94FF441F3AA_OFFSET))(this, a1, a2);
	}

	::Class_2_49CAB3DE74280C58* Method_1_25A06018317D6AA7(::Class_2_49CAB3DE74280C58* a1, ::System::UInt32 a2)
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_25A06018317D6AA7_OFFSET))(this, a1, a2);
	}

	::Class_2_49CAB3DE74280C58* Method_1_C114F069682DDFEE(::Class_2_49CAB3DE74280C58* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_C114F069682DDFEE_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_49CAB3DE74280C58* Method_1_404925E362CCE110(::RPG::GameCore::ChimeraDuelBuffConfig* a1, ::Class_1_C4FD36003027AC99* a2)
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBuffConfig*, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_404925E362CCE110_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B7C155059E24698(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelBuffConfig* a2, ::Class_1_C4FD36003027AC99* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelBuffConfig*, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_5B7C155059E24698_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_CDF67B2B48C596E7(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelBuffConfig* a2, ::Class_1_C4FD36003027AC99* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelBuffConfig*, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_CDF67B2B48C596E7_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_DE7741DA58DA5469(::System::Collections::Generic::ICollection_1<::System::Int32>* a1, ::RPG::GameCore::ChimeraDuelBuffConfig* a2, ::Class_1_C4FD36003027AC99* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Int32>*, ::RPG::GameCore::ChimeraDuelBuffConfig*, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_DE7741DA58DA5469_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_49CAB3DE74280C58* Method_1_C1A8BB17DF883CCA(::Class_1_0574DA6BF5DF5E24* a1, ::System::Int32 a2)
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID, ::Class_1_0574DA6BF5DF5E24*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5582DFD38EE429E6_METHOD_1_C1A8BB17DF883CCA_OFFSET))(this, a1, a2);
	}
};
