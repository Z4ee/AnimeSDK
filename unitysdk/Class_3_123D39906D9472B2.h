#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCD6FC733B25F13E.h"

class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEntityCompositeComparer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_123D39906D9472B2_METHOD_3_79DF01874AAC8623_OFFSET UNITYSDK_OFFSET(0x10A23F10)
#define CLASS_3_123D39906D9472B2__CTOR_OFFSET UNITYSDK_OFFSET(0x10A23E40)

inline static constexpr unsigned int Class_3_123D39906D9472B2_TypeDefinitionIndex = 62984;

class Class_3_123D39906D9472B2 : public ::Class_2_BCD6FC733B25F13E
{
public:
	::System::Collections::Generic::List_1<::Class_2_BCD6FC733B25F13E*>* Field_3_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelEntityCompositeComparer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEntityCompositeComparer*))((::PBYTE)hIl2Cpp + CLASS_3_123D39906D9472B2__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_79DF01874AAC8623(::Class_2_49CAB3DE74280C58* a1, ::Class_2_49CAB3DE74280C58* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_3_123D39906D9472B2_METHOD_3_79DF01874AAC8623_OFFSET))(this, a1, a2);
	}
};
