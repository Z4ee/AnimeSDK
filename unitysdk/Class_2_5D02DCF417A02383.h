#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AD981AB6ACE5E06.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_AC63217FE9B36D8A;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_5D02DCF417A02383_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1591EFD0)
#define CLASS_2_5D02DCF417A02383_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1591E770)
#define CLASS_2_5D02DCF417A02383_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1591E7F0)
#define CLASS_2_5D02DCF417A02383_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1591F7F0)
#define CLASS_2_5D02DCF417A02383_METHOD_2_8AF11A4113B593B4_OFFSET UNITYSDK_OFFSET(0x1591F660)
#define CLASS_2_5D02DCF417A02383_METHOD_2_C43E682297AD1F25_OFFSET UNITYSDK_OFFSET(0x1591F670)
#define CLASS_2_5D02DCF417A02383_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1591E700)
#define CLASS_2_5D02DCF417A02383_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1591F690)
#define CLASS_2_5D02DCF417A02383_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x1591E580)
#define CLASS_2_5D02DCF417A02383_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1591E600)
#define CLASS_2_5D02DCF417A02383_METHOD_2_DF5526BA6D1A4902_OFFSET UNITYSDK_OFFSET(0x1591F030)
#define CLASS_2_5D02DCF417A02383__CTOR_OFFSET UNITYSDK_OFFSET(0x1591F680)

inline static constexpr unsigned int Class_2_5D02DCF417A02383_TypeDefinitionIndex = 72851;

class Class_2_5D02DCF417A02383 : public ::Class_1_2AD981AB6ACE5E06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_3; // 0x20
	::Il2CppArray<::Class_1_AC63217FE9B36D8A*>* Field_2_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x30
	::System::Int32 Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D02DCF417A02383__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_5D02DCF417A02383_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D02DCF417A02383_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D02DCF417A02383_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_5D02DCF417A02383_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5D02DCF417A02383_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_2_8AF11A4113B593B4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D02DCF417A02383_METHOD_2_8AF11A4113B593B4_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_AC63217FE9B36D8A*>* Method_2_C43E682297AD1F25()
	{
		return ((::Il2CppArray<::Class_1_AC63217FE9B36D8A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D02DCF417A02383_METHOD_2_C43E682297AD1F25_OFFSET))(this);
	}

	static ::Class_2_5D02DCF417A02383* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_5D02DCF417A02383*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_5D02DCF417A02383_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_5D02DCF417A02383* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_5D02DCF417A02383*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5D02DCF417A02383_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_5D02DCF417A02383_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DF5526BA6D1A4902(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5D02DCF417A02383_METHOD_2_DF5526BA6D1A4902_OFFSET))(this, a1, a2);
	}
};
