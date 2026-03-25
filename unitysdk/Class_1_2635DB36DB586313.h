#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2635DB36DB586313_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1138D1D0)
#define CLASS_1_2635DB36DB586313_METHOD_1_44CEBD5C96A6BB20_OFFSET UNITYSDK_OFFSET(0x1138D1F0)
#define CLASS_1_2635DB36DB586313_METHOD_1_5769C6F1243380AD_OFFSET UNITYSDK_OFFSET(0x1138D430)
#define CLASS_1_2635DB36DB586313_METHOD_1_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x1138D380)
#define CLASS_1_2635DB36DB586313_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1138D330)
#define CLASS_1_2635DB36DB586313_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1138D1E0)
#define CLASS_1_2635DB36DB586313__CTOR_OFFSET UNITYSDK_OFFSET(0x1138D5E0)

inline static constexpr unsigned int Class_1_2635DB36DB586313_TypeDefinitionIndex = 50963;

class Class_1_2635DB36DB586313 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_AAD4F4215611A944, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>*>* Field_1_0; // 0x10
	::System::UInt32 _Version_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2635DB36DB586313__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2635DB36DB586313_GET_VERSION_OFFSET))(this);
	}

	::System::Void set_Version(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2635DB36DB586313_SET_VERSION_OFFSET))(this, value);
	}

	::System::Void Method_1_44CEBD5C96A6BB20(::Struct_2_AAD4F4215611A944& a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_2635DB36DB586313_METHOD_1_44CEBD5C96A6BB20_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6BCEDD4814D8A8D9(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_2635DB36DB586313_METHOD_1_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_5769C6F1243380AD(::Struct_2_AAD4F4215611A944& a1, ::RPG::GameCore::BattleExtraPropertyAddition a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::RPG::GameCore::BattleExtraPropertyAddition))((::PBYTE)hIl2Cpp + CLASS_1_2635DB36DB586313_METHOD_1_5769C6F1243380AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2635DB36DB586313_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
