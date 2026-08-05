#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AD981AB6ACE5E06_2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_AE77556F8299A979_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A44D10)
#define CLASS_2_AE77556F8299A979_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18A447D0)
#define CLASS_2_AE77556F8299A979_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x18A450C0)
#define CLASS_2_AE77556F8299A979_METHOD_2_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x18A44850)
#define CLASS_2_AE77556F8299A979_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x18A44650)
#define CLASS_2_AE77556F8299A979_METHOD_2_72BF6AD1701A5726_OFFSET UNITYSDK_OFFSET(0x18A44D70)
#define CLASS_2_AE77556F8299A979_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18A447C0)
#define CLASS_2_AE77556F8299A979_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x18A45270)
#define CLASS_2_AE77556F8299A979_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x18A446C0)
#define CLASS_2_AE77556F8299A979__CTOR_OFFSET UNITYSDK_OFFSET(0x18A450B0)

inline static constexpr unsigned int Class_2_AE77556F8299A979_TypeDefinitionIndex = 87477;

class Class_2_AE77556F8299A979 : public ::Class_1_2AD981AB6ACE5E06_2
{
public:
	::System::String* Field_2_0; // 0x20
	::System::String* Field_2_7; // 0x28
	::System::Int32 Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06_2* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_AE77556F8299A979* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_AE77556F8299A979*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_AE77556F8299A979* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_AE77556F8299A979*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_72BF6AD1701A5726(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_72BF6AD1701A5726_OFFSET))(this, a1, a2);
	}
};
