#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_75EB411B462BA1DB_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA483900)
#define CLASS_1_75EB411B462BA1DB_METHOD_1_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xA483A80)
#define CLASS_1_75EB411B462BA1DB_METHOD_1_6DFA0CCC29B19AE9_OFFSET UNITYSDK_OFFSET(0xA483920)
#define CLASS_1_75EB411B462BA1DB_METHOD_1_7A0D4B2191E00112_OFFSET UNITYSDK_OFFSET(0xA483B30)
#define CLASS_1_75EB411B462BA1DB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA483A30)
#define CLASS_1_75EB411B462BA1DB_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xA483910)
#define CLASS_1_75EB411B462BA1DB__CTOR_OFFSET UNITYSDK_OFFSET(0xA483C80)

inline static constexpr unsigned int Class_1_75EB411B462BA1DB_TypeDefinitionIndex = 58701;

class Class_1_75EB411B462BA1DB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_AAD4F4215611A944, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>*>* Field_1_0; // 0x10
	::System::UInt32 _Version_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75EB411B462BA1DB__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75EB411B462BA1DB_GET_VERSION_OFFSET))(this);
	}

	::System::Void set_Version(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75EB411B462BA1DB_SET_VERSION_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DFA0CCC29B19AE9(::Struct_2_AAD4F4215611A944& a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_75EB411B462BA1DB_METHOD_1_6DFA0CCC29B19AE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6BCEDD4814D8A8D9(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_75EB411B462BA1DB_METHOD_1_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_7A0D4B2191E00112(::Struct_2_AAD4F4215611A944& a1, ::RPG::GameCore::BattleExtraPropertyAddition a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::RPG::GameCore::BattleExtraPropertyAddition))((::PBYTE)hIl2Cpp + CLASS_1_75EB411B462BA1DB_METHOD_1_7A0D4B2191E00112_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75EB411B462BA1DB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
