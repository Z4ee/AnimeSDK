#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class HoyoTag; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DDA471B040D88D05__CCTOR_OFFSET UNITYSDK_OFFSET(0xF3732A0)

inline static constexpr unsigned int Class_1_DDA471B040D88D05_TypeDefinitionIndex = 47731;

class Class_1_DDA471B040D88D05 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::GameCore::HoyoTag*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::GameCore::HoyoTag*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DDA471B040D88D05_TypeDefinitionIndex)->GetStaticField(0x7D00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DDA471B040D88D05__CCTOR_OFFSET))();
	}
};
