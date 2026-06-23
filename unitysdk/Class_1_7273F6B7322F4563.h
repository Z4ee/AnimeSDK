#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_47;
class Class_2_D02DABCF41CDA271;
class Class_2_DF2C726EEEEC912D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_7273F6B7322F4563_METHOD_1_9E70E31AC8AF5074_1_OFFSET UNITYSDK_OFFSET(0x12881DF0)
#define CLASS_1_7273F6B7322F4563_METHOD_1_9E70E31AC8AF5074_OFFSET UNITYSDK_OFFSET(0x12881BC0)
#define CLASS_1_7273F6B7322F4563__CCTOR_OFFSET UNITYSDK_OFFSET(0x128817D0)
#define CLASS_1_7273F6B7322F4563__CTOR_OFFSET UNITYSDK_OFFSET(0x128817C0)

inline static constexpr unsigned int Class_1_7273F6B7322F4563_TypeDefinitionIndex = 55549;

class Class_1_7273F6B7322F4563 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_43BD383C98B4C0C5_47*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_43BD383C98B4C0C5_47*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7273F6B7322F4563_TypeDefinitionIndex)->GetStaticField(0x45C10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_43BD383C98B4C0C5_47*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_43BD383C98B4C0C5_47*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7273F6B7322F4563_TypeDefinitionIndex)->GetStaticField(0x45C18);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7273F6B7322F4563__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7273F6B7322F4563__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_9E70E31AC8AF5074(::Class_2_DF2C726EEEEC912D* a1, ::Class_2_D02DABCF41CDA271* a2, ::System::Int32 a3, ::System::String* a4, ::System::Collections::Generic::IList_1<::System::String*>* a5, ::System::Collections::Generic::IList_1<::System::Int32>* a6, ::System::String* a7)
	{
		return ((::System::String*(*)(::Class_2_DF2C726EEEEC912D*, ::Class_2_D02DABCF41CDA271*, ::System::Int32, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7273F6B7322F4563_METHOD_1_9E70E31AC8AF5074_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::String* Method_1_9E70E31AC8AF5074_1(::Class_2_DF2C726EEEEC912D* a1, ::Class_2_D02DABCF41CDA271* a2, ::System::Int32 a3, ::System::String* a4, ::System::Collections::Generic::IList_1<::System::String*>* a5, ::System::Collections::Generic::IList_1<::System::Int32>* a6, ::System::String* a7)
	{
		return ((::System::String*(*)(::Class_2_DF2C726EEEEC912D*, ::Class_2_D02DABCF41CDA271*, ::System::Int32, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7273F6B7322F4563_METHOD_1_9E70E31AC8AF5074_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};
