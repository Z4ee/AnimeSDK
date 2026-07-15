#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_804;
class Class_1_10F56A639581CEB1_13;
class Class_1_10F56A639581CEB1_14;
class Class_1_66D6A0360B93D27A_1;
class Class_1_D17272E82AE804C2_414;
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_BE77F98C85B2B14F_METHOD_1_0A88558886DAB838_OFFSET UNITYSDK_OFFSET(0x152475B0)
#define CLASS_1_BE77F98C85B2B14F_METHOD_1_2B081523EC96C6A9_OFFSET UNITYSDK_OFFSET(0x15247600)
#define CLASS_1_BE77F98C85B2B14F_METHOD_1_2C012DA3A9315A95_OFFSET UNITYSDK_OFFSET(0x15246F70)
#define CLASS_1_BE77F98C85B2B14F_METHOD_1_B9746DD346A42051_OFFSET UNITYSDK_OFFSET(0x15247670)
#define CLASS_1_BE77F98C85B2B14F_METHOD_1_E18CD194231C2D37_OFFSET UNITYSDK_OFFSET(0x15247250)
#define CLASS_1_BE77F98C85B2B14F__CTOR_OFFSET UNITYSDK_OFFSET(0x15246F60)

inline static constexpr unsigned int Class_1_BE77F98C85B2B14F_TypeDefinitionIndex = 62344;

class Class_1_BE77F98C85B2B14F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_804* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_804* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_804*))((::PBYTE)hIl2Cpp + CLASS_1_BE77F98C85B2B14F__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightRole* Method_1_2C012DA3A9315A95(::Class_1_66D6A0360B93D27A_1* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::Class_1_66D6A0360B93D27A_1*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE77F98C85B2B14F_METHOD_1_2C012DA3A9315A95_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::GridFightRole* Method_1_E18CD194231C2D37(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a4)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_BE77F98C85B2B14F_METHOD_1_E18CD194231C2D37_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::GridFightForgeItemData* Method_1_0A88558886DAB838(::Class_1_10F56A639581CEB1_14* a1)
	{
		return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::Class_1_10F56A639581CEB1_14*))((::PBYTE)hIl2Cpp + CLASS_1_BE77F98C85B2B14F_METHOD_1_0A88558886DAB838_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightNPC* Method_1_2B081523EC96C6A9(::Class_1_10F56A639581CEB1_13* a1)
	{
		return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::Class_1_10F56A639581CEB1_13*))((::PBYTE)hIl2Cpp + CLASS_1_BE77F98C85B2B14F_METHOD_1_2B081523EC96C6A9_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightProjection* Method_1_B9746DD346A42051(::Class_1_D17272E82AE804C2_414* a1)
	{
		return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::Class_1_D17272E82AE804C2_414*))((::PBYTE)hIl2Cpp + CLASS_1_BE77F98C85B2B14F_METHOD_1_B9746DD346A42051_OFFSET))(this, a1);
	}
};
