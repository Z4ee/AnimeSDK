#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtModifierPropertyOverrideData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_401EFD0D9B10F234_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x1845D210)
#define CLASS_3_401EFD0D9B10F234_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1845D290)
#define CLASS_3_401EFD0D9B10F234__CTOR_OFFSET UNITYSDK_OFFSET(0x1845D260)

inline static constexpr unsigned int Class_3_401EFD0D9B10F234_TypeDefinitionIndex = 23186;

class Class_3_401EFD0D9B10F234 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::RtModifierPropertyOverrideData*>* Field_3_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* Field_3_2; // 0x28
	::System::String* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_401EFD0D9B10F234__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_401EFD0D9B10F234*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_401EFD0D9B10F234*&))((::PBYTE)hIl2Cpp + CLASS_3_401EFD0D9B10F234_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_401EFD0D9B10F234* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_401EFD0D9B10F234*))((::PBYTE)hIl2Cpp + CLASS_3_401EFD0D9B10F234_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
