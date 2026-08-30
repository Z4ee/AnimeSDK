#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_D4A1C21BD73DEB0F_METHOD_1_4F91944FDB9C0F78_OFFSET UNITYSDK_OFFSET(0xC3361E0)
#define CLASS_1_D4A1C21BD73DEB0F__CTOR_OFFSET UNITYSDK_OFFSET(0xC3361D0)

inline static constexpr unsigned int Class_1_D4A1C21BD73DEB0F_TypeDefinitionIndex = 65360;

class Class_1_D4A1C21BD73DEB0F : public ::System::Object
{
public:
	::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* CCLGKDICBNH; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D4A1C21BD73DEB0F__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_4F91944FDB9C0F78(::System::String* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D4A1C21BD73DEB0F_METHOD_1_4F91944FDB9C0F78_OFFSET))(this, a1);
	}
};
