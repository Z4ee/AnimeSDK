#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DesignerUserPrefsDomain.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_793BE85014926622_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x183BF770)
#define CLASS_3_793BE85014926622_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x183BF7F0)
#define CLASS_3_793BE85014926622__CTOR_OFFSET UNITYSDK_OFFSET(0x183BF7C0)

inline static constexpr unsigned int Class_3_793BE85014926622_TypeDefinitionIndex = 20273;

class Class_3_793BE85014926622 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_1; // 0x18
	::RPG::GameCore::DesignerUserPrefsDomain Field_3_0; // 0x20
	::System::UInt32 Field_3_2; // 0x24
	::System::Boolean Field_3_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_793BE85014926622__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_793BE85014926622*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_793BE85014926622*&))((::PBYTE)hIl2Cpp + CLASS_3_793BE85014926622_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_793BE85014926622* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_793BE85014926622*))((::PBYTE)hIl2Cpp + CLASS_3_793BE85014926622_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
