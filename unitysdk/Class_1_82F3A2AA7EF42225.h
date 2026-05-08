#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_061801F5C4991F1A;
class Class_1_236FD73ABC492E3F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82F3A2AA7EF42225_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16228F40)
#define CLASS_1_82F3A2AA7EF42225_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16229220)
#define CLASS_1_82F3A2AA7EF42225_METHOD_1_25996F1180FB0C28_OFFSET UNITYSDK_OFFSET(0x16228FA0)
#define CLASS_1_82F3A2AA7EF42225_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x162292A0)
#define CLASS_1_82F3A2AA7EF42225__CTOR_OFFSET UNITYSDK_OFFSET(0x16229600)

inline static constexpr unsigned int Class_1_82F3A2AA7EF42225_TypeDefinitionIndex = 62679;

class Class_1_82F3A2AA7EF42225 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_061801F5C4991F1A*>* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82F3A2AA7EF42225__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_82F3A2AA7EF42225_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_82F3A2AA7EF42225_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_25996F1180FB0C28(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_82F3A2AA7EF42225_METHOD_1_25996F1180FB0C28_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_82F3A2AA7EF42225_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}
};
