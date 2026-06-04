#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ED128C95E67DC400_Class_1_2803C61A1B7C2113;
class Class_3_107D88E49CCA98ED;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_ED128C95E67DC400_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB7AA20)
#define CLASS_1_ED128C95E67DC400_METHOD_1_34350D250637759F_OFFSET UNITYSDK_OFFSET(0xAB7AC20)
#define CLASS_1_ED128C95E67DC400_METHOD_1_3F61F56295827FBC_OFFSET UNITYSDK_OFFSET(0xAB7B0C0)
#define CLASS_1_ED128C95E67DC400_METHOD_1_535079AAF5EDFF62_OFFSET UNITYSDK_OFFSET(0xAB7AF00)
#define CLASS_1_ED128C95E67DC400_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAB7B200)
#define CLASS_1_ED128C95E67DC400_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAB7B1C0)
#define CLASS_1_ED128C95E67DC400__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7A9A0)

inline static constexpr unsigned int Class_1_ED128C95E67DC400_TypeDefinitionIndex = 56280;

class Class_1_ED128C95E67DC400 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_ED128C95E67DC400_Class_1_2803C61A1B7C2113*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED128C95E67DC400__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED128C95E67DC400_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_34350D250637759F(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::Class_3_107D88E49CCA98ED* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::Class_3_107D88E49CCA98ED*))((::PBYTE)hIl2Cpp + CLASS_1_ED128C95E67DC400_METHOD_1_34350D250637759F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_535079AAF5EDFF62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED128C95E67DC400_METHOD_1_535079AAF5EDFF62_OFFSET))(this);
	}

	::System::Void Method_1_3F61F56295827FBC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED128C95E67DC400_METHOD_1_3F61F56295827FBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED128C95E67DC400_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED128C95E67DC400_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
