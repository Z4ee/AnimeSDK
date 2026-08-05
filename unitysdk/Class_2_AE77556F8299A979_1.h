#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AD981AB6ACE5E06.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_AE77556F8299A979_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xBD69730)
#define CLASS_2_AE77556F8299A979_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0xBD69370)
#define CLASS_2_AE77556F8299A979_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xBD69BE0)
#define CLASS_2_AE77556F8299A979_1_METHOD_2_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0xBD693F0)
#define CLASS_2_AE77556F8299A979_1_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xBD69210)
#define CLASS_2_AE77556F8299A979_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xBD69360)
#define CLASS_2_AE77556F8299A979_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xBD69A80)
#define CLASS_2_AE77556F8299A979_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xBD69260)
#define CLASS_2_AE77556F8299A979_1_METHOD_2_E0AC97338167133E_OFFSET UNITYSDK_OFFSET(0xBD69790)
#define CLASS_2_AE77556F8299A979_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBD69A70)

inline static constexpr unsigned int Class_2_AE77556F8299A979_1_TypeDefinitionIndex = 79798;

class Class_2_AE77556F8299A979_1 : public ::Class_1_2AD981AB6ACE5E06
{
public:
	::System::String* Field_2_0; // 0x18
	::System::Int32 Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_1_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_AE77556F8299A979_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_AE77556F8299A979_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_AE77556F8299A979_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_AE77556F8299A979_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_E0AC97338167133E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_1_METHOD_2_E0AC97338167133E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_1_METHOD_2_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}
};
