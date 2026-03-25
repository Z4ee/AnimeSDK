#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5674E7B417F2830A_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::GameCore { class LevelSpatialIntVec2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_72CC10A34CA99622_METHOD_1_B7D2DB9A0CF29AE4_OFFSET UNITYSDK_OFFSET(0x110DFBA0)
#define CLASS_1_72CC10A34CA99622__CTOR_OFFSET UNITYSDK_OFFSET(0x110DF8C0)

inline static constexpr unsigned int Class_1_72CC10A34CA99622_TypeDefinitionIndex = 50384;

class Class_1_72CC10A34CA99622 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Struct_2_5674E7B417F2830A_1>* Field_1_0; // 0x10
	::UnityEngine::Bounds Field_1_1; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::Int16>* a1, ::RPG::GameCore::LevelSpatialIntVec2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int16>*, ::RPG::GameCore::LevelSpatialIntVec2*))((::PBYTE)hIl2Cpp + CLASS_1_72CC10A34CA99622__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B7D2DB9A0CF29AE4(::Class_1_72CC10A34CA99622* a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_72CC10A34CA99622*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_72CC10A34CA99622_METHOD_1_B7D2DB9A0CF29AE4_OFFSET))(this, a1, a2, a3);
	}
};
