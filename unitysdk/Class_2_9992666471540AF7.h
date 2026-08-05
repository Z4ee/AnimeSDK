#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/Class_2_9992666471540AF7_Struct_2_246396B36021DC0E_1.h"
#include "unitysdk/Class_2_9992666471540AF7_Struct_2_856A57F50BE61AD4.h"

class Class_2_785FDC7D0DA58280;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_9992666471540AF7_METHOD_2_003C57B6C96D86C1_OFFSET UNITYSDK_OFFSET(0x1FB5CD20)
#define CLASS_2_9992666471540AF7_METHOD_2_09C4428BEAB114EA_OFFSET UNITYSDK_OFFSET(0x1FB5DC20)
#define CLASS_2_9992666471540AF7_METHOD_2_2FDA1D18FBAAE3CA_OFFSET UNITYSDK_OFFSET(0x1FB5DB80)
#define CLASS_2_9992666471540AF7_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1FB5D800)
#define CLASS_2_9992666471540AF7_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x1FB5DD40)
#define CLASS_2_9992666471540AF7_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x1FB5D7B0)
#define CLASS_2_9992666471540AF7_METHOD_2_D9CA25FAB791DCA8_OFFSET UNITYSDK_OFFSET(0x1FB5DA40)
#define CLASS_2_9992666471540AF7__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB5D920)

inline static constexpr unsigned int Class_2_9992666471540AF7_TypeDefinitionIndex = 94812;

class Class_2_9992666471540AF7 : public ::Class_1_321489CFFF7B18E7
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_2_7; // 0x18
	::System::Collections::Generic::Queue_1<::Class_2_9992666471540AF7_Struct_2_246396B36021DC0E_1>* Field_2_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Queue_1<::Class_2_9992666471540AF7_Struct_2_856A57F50BE61AD4>*>* Field_2_0; // 0x28
	::System::Single Field_2_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9992666471540AF7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_2_9992666471540AF7_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9992666471540AF7_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_2_D9CA25FAB791DCA8(::System::UInt32 a1, ::Class_2_9992666471540AF7_Struct_2_856A57F50BE61AD4& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_9992666471540AF7_Struct_2_856A57F50BE61AD4&))((::PBYTE)hIl2Cpp + CLASS_2_9992666471540AF7_METHOD_2_D9CA25FAB791DCA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_003C57B6C96D86C1(::System::UInt32 a1, ::Class_2_9992666471540AF7_Struct_2_856A57F50BE61AD4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_9992666471540AF7_Struct_2_856A57F50BE61AD4))((::PBYTE)hIl2Cpp + CLASS_2_9992666471540AF7_METHOD_2_003C57B6C96D86C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2FDA1D18FBAAE3CA(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9992666471540AF7_METHOD_2_2FDA1D18FBAAE3CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_09C4428BEAB114EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9992666471540AF7_METHOD_2_09C4428BEAB114EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9992666471540AF7_METHOD_2_76CD9B9D1269FA90_OFFSET))(this, a1);
	}
};
