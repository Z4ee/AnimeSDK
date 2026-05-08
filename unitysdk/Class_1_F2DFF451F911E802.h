#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9763788121EBFB63.h"
#include "unitysdk/System/Object.h"

class Class_1_222AFD56C06A15C1;
class Class_1_222B1F43FDE48C10;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_F2DFF451F911E802_METHOD_1_A1E37D8FC0177BE6_OFFSET UNITYSDK_OFFSET(0x11892D90)
#define CLASS_1_F2DFF451F911E802_METHOD_1_AD5C27F92F7EC6D2_OFFSET UNITYSDK_OFFSET(0x11892AA0)
#define CLASS_1_F2DFF451F911E802_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x118930D0)
#define CLASS_1_F2DFF451F911E802_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x11893120)
#define CLASS_1_F2DFF451F911E802__CCTOR_OFFSET UNITYSDK_OFFSET(0x11892A00)
#define CLASS_1_F2DFF451F911E802__CTOR_OFFSET UNITYSDK_OFFSET(0x118929F0)

inline static constexpr unsigned int Class_1_F2DFF451F911E802_TypeDefinitionIndex = 50492;

class Class_1_F2DFF451F911E802 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_9763788121EBFB63, ::System::Collections::Generic::Queue_1<::Class_1_222AFD56C06A15C1*>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_9763788121EBFB63, ::System::Collections::Generic::Queue_1<::Class_1_222AFD56C06A15C1*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2DFF451F911E802_TypeDefinitionIndex)->GetStaticField(0x34350);
	}
	::Class_1_222B1F43FDE48C10* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor(::Class_1_222B1F43FDE48C10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_222B1F43FDE48C10*))((::PBYTE)hIl2Cpp + CLASS_1_F2DFF451F911E802__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2DFF451F911E802__CCTOR_OFFSET))();
	}

	::Class_1_222AFD56C06A15C1* Method_1_AD5C27F92F7EC6D2(::Enum_3_9763788121EBFB63 a1)
	{
		return ((::Class_1_222AFD56C06A15C1*(*)(::PVOID, ::Enum_3_9763788121EBFB63))((::PBYTE)hIl2Cpp + CLASS_1_F2DFF451F911E802_METHOD_1_AD5C27F92F7EC6D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1E37D8FC0177BE6(::Class_1_222AFD56C06A15C1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_222AFD56C06A15C1*))((::PBYTE)hIl2Cpp + CLASS_1_F2DFF451F911E802_METHOD_1_A1E37D8FC0177BE6_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2DFF451F911E802_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2DFF451F911E802_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}
};
