#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_2D7DFAB849E602CE_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1C8DDDE0)
#define CLASS_3_2D7DFAB849E602CE_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x1C8DDE20)
#define CLASS_3_2D7DFAB849E602CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DDE10)

inline static constexpr unsigned int Class_3_2D7DFAB849E602CE_TypeDefinitionIndex = 23087;

class Class_3_2D7DFAB849E602CE : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* OELMOCMDEJI; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* CHLBKIKJFLC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D7DFAB849E602CE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2D7DFAB849E602CE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2D7DFAB849E602CE*&))((::PBYTE)hIl2Cpp + CLASS_3_2D7DFAB849E602CE_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2D7DFAB849E602CE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2D7DFAB849E602CE*))((::PBYTE)hIl2Cpp + CLASS_3_2D7DFAB849E602CE_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
