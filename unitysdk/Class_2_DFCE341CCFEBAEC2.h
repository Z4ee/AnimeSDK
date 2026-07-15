#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1C30CE192ABE4C54.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_B59D99363F8EDC06.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DFCE341CCFEBAEC2_METHOD_2_1CFAD5EA252913A9_OFFSET UNITYSDK_OFFSET(0x16B9E530)
#define CLASS_2_DFCE341CCFEBAEC2_METHOD_2_8372105B14BB623E_OFFSET UNITYSDK_OFFSET(0x16B9E460)
#define CLASS_2_DFCE341CCFEBAEC2_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16B9E3D0)
#define CLASS_2_DFCE341CCFEBAEC2_METHOD_2_9453301D6326EE39_OFFSET UNITYSDK_OFFSET(0x16B9D920)
#define CLASS_2_DFCE341CCFEBAEC2_METHOD_2_9D57968F177C663C_OFFSET UNITYSDK_OFFSET(0x16B9DC20)
#define CLASS_2_DFCE341CCFEBAEC2_METHOD_2_A64DFBBFCE3CE276_OFFSET UNITYSDK_OFFSET(0x16B9E330)
#define CLASS_2_DFCE341CCFEBAEC2_METHOD_2_C86F71D5DA5AC9D3_OFFSET UNITYSDK_OFFSET(0x16B9E620)
#define CLASS_2_DFCE341CCFEBAEC2_METHOD_2_DAFB0CB11B77534F_OFFSET UNITYSDK_OFFSET(0x16B9DE80)
#define CLASS_2_DFCE341CCFEBAEC2__CTOR_OFFSET UNITYSDK_OFFSET(0x16B9E6D0)

inline static constexpr unsigned int Class_2_DFCE341CCFEBAEC2_TypeDefinitionIndex = 54308;

class Class_2_DFCE341CCFEBAEC2 : public ::Class_1_1C30CE192ABE4C54
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Collections::Generic::List_1<::Struct_2_B59D99363F8EDC06>*>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9453301D6326EE39(::RPG::GameCore::StringHash a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2_METHOD_2_9453301D6326EE39_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9D57968F177C663C(::RPG::GameCore::StringHash a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2_METHOD_2_9D57968F177C663C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DAFB0CB11B77534F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2_METHOD_2_DAFB0CB11B77534F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A64DFBBFCE3CE276(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2_METHOD_2_A64DFBBFCE3CE276_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8372105B14BB623E(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2_METHOD_2_8372105B14BB623E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1CFAD5EA252913A9(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2_METHOD_2_1CFAD5EA252913A9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>>* Method_2_C86F71D5DA5AC9D3()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2_METHOD_2_C86F71D5DA5AC9D3_OFFSET))(this);
	}
};
