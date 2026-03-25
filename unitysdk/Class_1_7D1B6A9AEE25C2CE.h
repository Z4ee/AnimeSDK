#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7D1B6A9AEE25C2CE_Class_1_9CBD4493D0516F42;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7D1B6A9AEE25C2CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE463CE0)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_09CCD73C6DC37035_1_OFFSET UNITYSDK_OFFSET(0xE463BA0)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_09CCD73C6DC37035_OFFSET UNITYSDK_OFFSET(0xE463A60)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_13F57FFFEB246CE4_OFFSET UNITYSDK_OFFSET(0xE463D30)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0xE463460)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xE463170)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0xE4635B0)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_5E657A2D9C0A02DF_1_OFFSET UNITYSDK_OFFSET(0xE463970)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_5E657A2D9C0A02DF_OFFSET UNITYSDK_OFFSET(0xE463740)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_C8D0BFE1F6D440B5_OFFSET UNITYSDK_OFFSET(0xE4637E0)
#define CLASS_1_7D1B6A9AEE25C2CE__CTOR_OFFSET UNITYSDK_OFFSET(0xE4630C0)

inline static constexpr unsigned int Class_1_7D1B6A9AEE25C2CE_TypeDefinitionIndex = 46294;

class Class_1_7D1B6A9AEE25C2CE : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_7D1B6A9AEE25C2CE_Class_1_9CBD4493D0516F42*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_3; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_1_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E657A2D9C0A02DF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_5E657A2D9C0A02DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E657A2D9C0A02DF_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_5E657A2D9C0A02DF_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_09CCD73C6DC37035(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_09CCD73C6DC37035_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_09CCD73C6DC37035_1(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_09CCD73C6DC37035_1_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_DISPOSE_OFFSET))(this);
	}

	::Class_1_7D1B6A9AEE25C2CE_Class_1_9CBD4493D0516F42* Method_1_C8D0BFE1F6D440B5(::System::String* a1)
	{
		return ((::Class_1_7D1B6A9AEE25C2CE_Class_1_9CBD4493D0516F42*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_C8D0BFE1F6D440B5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_13F57FFFEB246CE4(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_13F57FFFEB246CE4_OFFSET))(this, a1);
	}
};
