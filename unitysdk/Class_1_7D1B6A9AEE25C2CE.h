#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7D1B6A9AEE25C2CE_Class_1_9CBD4493D0516F42;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7D1B6A9AEE25C2CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEB54F0)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_09CCD73C6DC37035_1_OFFSET UNITYSDK_OFFSET(0xBEB53B0)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_09CCD73C6DC37035_OFFSET UNITYSDK_OFFSET(0xBEB5270)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_16B5D0D62FF4E55B_OFFSET UNITYSDK_OFFSET(0xBEB5020)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_27EBAAFAF5369197_OFFSET UNITYSDK_OFFSET(0xBEB5540)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_4307B2A4B4A12C1A_1_OFFSET UNITYSDK_OFFSET(0xBEB4C60)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xBEB4950)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_5E657A2D9C0A02DF_1_OFFSET UNITYSDK_OFFSET(0xBEB5180)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_5E657A2D9C0A02DF_OFFSET UNITYSDK_OFFSET(0xBEB4F80)
#define CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0xBEB4DD0)
#define CLASS_1_7D1B6A9AEE25C2CE__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB4890)

inline static constexpr unsigned int Class_1_7D1B6A9AEE25C2CE_TypeDefinitionIndex = 57622;

class Class_1_7D1B6A9AEE25C2CE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IDGNBNECPDP; // 0x10
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
	::System::Collections::Generic::List_1<::Class_1_7D1B6A9AEE25C2CE_Class_1_9CBD4493D0516F42*>* KHOMDENEOAE; // 0x20
	::System::Boolean MGLCBBJLHPO; // 0x28

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_4307B2A4B4A12C1A_1_OFFSET))(this);
	}

	::System::Void Method_1_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_FD7514C64FB1B043_OFFSET))(this, a1);
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

	::Class_1_7D1B6A9AEE25C2CE_Class_1_9CBD4493D0516F42* Method_1_16B5D0D62FF4E55B(::System::String* a1)
	{
		return ((::Class_1_7D1B6A9AEE25C2CE_Class_1_9CBD4493D0516F42*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_16B5D0D62FF4E55B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_27EBAAFAF5369197(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7D1B6A9AEE25C2CE_METHOD_1_27EBAAFAF5369197_OFFSET))(this, a1);
	}
};
