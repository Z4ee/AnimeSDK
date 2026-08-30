#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardIdentifier.h"
#include "unitysdk/System/Object.h"

class Class_1_32498A3DD9CD63CE;
class Class_1_426391BD841CEF9C;
class Class_1_AD02BB4198B22C6F;
class Class_1_B71FC14BA77C9F77;
class Class_1_D294488719556168;
class Class_2_7EA45D2647F35CDD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0BFCB1EEACAB9072_METHOD_1_5A095F0618903421_OFFSET UNITYSDK_OFFSET(0x153843A0)
#define CLASS_1_0BFCB1EEACAB9072_METHOD_1_6475A02AD37A8BE6_OFFSET UNITYSDK_OFFSET(0x15383BD0)
#define CLASS_1_0BFCB1EEACAB9072__CTOR_OFFSET UNITYSDK_OFFSET(0x15383B20)

inline static constexpr unsigned int Class_1_0BFCB1EEACAB9072_TypeDefinitionIndex = 79781;

class Class_1_0BFCB1EEACAB9072 : public ::System::Object
{
public:
	::Class_1_32498A3DD9CD63CE* JJANKLBLJBG; // 0x10
	::Class_1_AD02BB4198B22C6F* IDHHCHBHALO; // 0x18

	::System::Void _ctor(::Class_1_AD02BB4198B22C6F* a1, ::Class_1_32498A3DD9CD63CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AD02BB4198B22C6F*, ::Class_1_32498A3DD9CD63CE*))((::PBYTE)hIl2Cpp + CLASS_1_0BFCB1EEACAB9072__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6475A02AD37A8BE6(::Class_1_426391BD841CEF9C* a1, ::Class_2_7EA45D2647F35CDD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_426391BD841CEF9C*, ::Class_2_7EA45D2647F35CDD*))((::PBYTE)hIl2Cpp + CLASS_1_0BFCB1EEACAB9072_METHOD_1_6475A02AD37A8BE6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A095F0618903421(::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_D294488719556168*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier, ::Class_1_B71FC14BA77C9F77*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>*, ::System::Collections::Generic::IEnumerable_1<::Class_1_D294488719556168*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier, ::Class_1_B71FC14BA77C9F77*>*))((::PBYTE)hIl2Cpp + CLASS_1_0BFCB1EEACAB9072_METHOD_1_5A095F0618903421_OFFSET))(this, a1, a2, a3);
	}
};
