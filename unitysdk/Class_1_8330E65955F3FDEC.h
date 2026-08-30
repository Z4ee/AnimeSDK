#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7C3EF1FF302C26DE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_8330E65955F3FDEC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DBE0510)
#define CLASS_1_8330E65955F3FDEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE0690)

inline static constexpr unsigned int Class_1_8330E65955F3FDEC_TypeDefinitionIndex = 40430;

class Class_1_8330E65955F3FDEC : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::ValueTuple_2<::System::String*, ::System::Int32>, ::System::Action*>* PJOEHACIIJO; // 0x10
	::System::Action_3<::System::String*, ::System::UInt32, ::System::Int32>* LGPFAMLMIGD; // 0x18
	::RPG::PoolDictionary_2<::System::ValueTuple_2<::System::String*, ::System::UInt32>, ::System::Action*>* IFFINOBAHLE; // 0x20
	::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolHashSet_1<::Struct_2_7C3EF1FF302C26DE>*>* AOPGPJBIHPF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8330E65955F3FDEC__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8330E65955F3FDEC_CLEAR_OFFSET))(this);
	}
};
