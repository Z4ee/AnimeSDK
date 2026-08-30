#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelRankData; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_EAFAB368CCDA222C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170A35F0)
#define CLASS_1_EAFAB368CCDA222C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170A3620)
#define CLASS_1_EAFAB368CCDA222C___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x170A3630)

inline static constexpr unsigned int Class_1_EAFAB368CCDA222C___c_TypeDefinitionIndex = 63441;

class Class_1_EAFAB368CCDA222C___c : public ::System::Object
{
public:
	static ::Class_1_EAFAB368CCDA222C___c** StaticGet___9()
	{
		return (::Class_1_EAFAB368CCDA222C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EAFAB368CCDA222C___c_TypeDefinitionIndex)->GetStaticField(0x5F360);
	}
	static ::System::Comparison_1<::RPG::Client::ChimeraDuelRankData*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::RPG::Client::ChimeraDuelRankData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EAFAB368CCDA222C___c_TypeDefinitionIndex)->GetStaticField(0x5F368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EAFAB368CCDA222C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAFAB368CCDA222C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__1_0(::RPG::Client::ChimeraDuelRankData* a1, ::RPG::Client::ChimeraDuelRankData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelRankData*, ::RPG::Client::ChimeraDuelRankData*))((::PBYTE)hIl2Cpp + CLASS_1_EAFAB368CCDA222C___C___CTOR_B__1_0_OFFSET))(this, a1, a2);
	}
};
