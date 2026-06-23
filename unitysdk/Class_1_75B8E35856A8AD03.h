#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_249BA0FC7F6B6A2B.h"
#include "unitysdk/Enum_3_972C37F6321EBB18.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_8FCF3FE3F8E0AF4C;
class Class_1_EAF23F875B61917D;
class Class_2_4D61A7A49E7F7878;
class Class_3_AB85E7FADC85A60C;
class Class_3_EEB4050A9A5804AD;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_75B8E35856A8AD03_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AABA210)
#define CLASS_1_75B8E35856A8AD03_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1AAB9520)
#define CLASS_1_75B8E35856A8AD03_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0x1AABA9A0)
#define CLASS_1_75B8E35856A8AD03_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x1AAB95A0)
#define CLASS_1_75B8E35856A8AD03_METHOD_1_6804FC072C88D96A_OFFSET UNITYSDK_OFFSET(0x1AABA270)
#define CLASS_1_75B8E35856A8AD03_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0x1AABAAF0)
#define CLASS_1_75B8E35856A8AD03_METHOD_1_98EF6E77C31FEAA3_OFFSET UNITYSDK_OFFSET(0x1AABA760)
#define CLASS_1_75B8E35856A8AD03_METHOD_1_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1AAB94B0)
#define CLASS_1_75B8E35856A8AD03_METHOD_1_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0x1AAB9320)
#define CLASS_1_75B8E35856A8AD03_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1AAB93B0)
#define CLASS_1_75B8E35856A8AD03_METHOD_1_E3E432332CDEA9CB_OFFSET UNITYSDK_OFFSET(0x1AAB92D0)
#define CLASS_1_75B8E35856A8AD03__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAB9240)

inline static constexpr unsigned int Class_1_75B8E35856A8AD03_TypeDefinitionIndex = 45688;

class Class_1_75B8E35856A8AD03 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_EAF23F875B61917D*>* Field_1_7; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_4; // 0x18
	::MoleMole::Config::DynamicInt* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_8FCF3FE3F8E0AF4C*>* Field_1_5; // 0x28
	::Enum_3_249BA0FC7F6B6A2B Field_1_3; // 0x30
	::MoleMole::Config::ValueCompareType Field_1_2; // 0x34
	::Enum_3_972C37F6321EBB18 Field_1_6; // 0x38
	::System::Int32 Field_1_0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75B8E35856A8AD03__CTOR_OFFSET))(this);
	}

	::Class_2_4D61A7A49E7F7878* Method_1_E3E432332CDEA9CB(::Class_3_AB85E7FADC85A60C* a1)
	{
		return ((::Class_2_4D61A7A49E7F7878*(*)(::PVOID, ::Class_3_AB85E7FADC85A60C*))((::PBYTE)hIl2Cpp + CLASS_1_75B8E35856A8AD03_METHOD_1_E3E432332CDEA9CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_75B8E35856A8AD03_METHOD_1_D48F6ED8C47DDD04_OFFSET))(this, a1);
	}

	::Class_1_75B8E35856A8AD03* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_75B8E35856A8AD03*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75B8E35856A8AD03_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_1_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75B8E35856A8AD03_METHOD_1_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_75B8E35856A8AD03_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75B8E35856A8AD03_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_3_EEB4050A9A5804AD* Method_1_98EF6E77C31FEAA3(::Class_1_75B8E35856A8AD03* a1, ::Class_3_AB85E7FADC85A60C* a2, ::Class_2_4D61A7A49E7F7878* a3)
	{
		return ((::Class_3_EEB4050A9A5804AD*(*)(::Class_1_75B8E35856A8AD03*, ::Class_3_AB85E7FADC85A60C*, ::Class_2_4D61A7A49E7F7878*))((::PBYTE)hIl2Cpp + CLASS_1_75B8E35856A8AD03_METHOD_1_98EF6E77C31FEAA3_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_75B8E35856A8AD03* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_75B8E35856A8AD03*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75B8E35856A8AD03_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}

	static ::Class_1_75B8E35856A8AD03* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_75B8E35856A8AD03*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_75B8E35856A8AD03_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_75B8E35856A8AD03_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6804FC072C88D96A(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75B8E35856A8AD03_METHOD_1_6804FC072C88D96A_OFFSET))(this, a1, a2);
	}
};
