#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_0F8A54C1BCB5A29D_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x18F626D0)
#define CLASS_3_0F8A54C1BCB5A29D_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x18F62650)
#define CLASS_3_0F8A54C1BCB5A29D__CTOR_OFFSET UNITYSDK_OFFSET(0x18F626A0)

inline static constexpr unsigned int Class_3_0F8A54C1BCB5A29D_TypeDefinitionIndex = 22079;

class Class_3_0F8A54C1BCB5A29D : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F8A54C1BCB5A29D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0F8A54C1BCB5A29D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0F8A54C1BCB5A29D*&))((::PBYTE)hIl2Cpp + CLASS_3_0F8A54C1BCB5A29D_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0F8A54C1BCB5A29D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0F8A54C1BCB5A29D*))((::PBYTE)hIl2Cpp + CLASS_3_0F8A54C1BCB5A29D_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
