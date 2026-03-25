#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"

class Class_3_002145AD8E0A4DB8;
namespace RPG::Client::MVVM::Service { class LimaoNewsPostService; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FFBE09696B36D486_GET_ALLCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x8908E10)
#define CLASS_3_FFBE09696B36D486_GET_SHOWCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x8908E30)
#define CLASS_3_FFBE09696B36D486_METHOD_3_0D4D447F31661D06_OFFSET UNITYSDK_OFFSET(0x89085B0)
#define CLASS_3_FFBE09696B36D486_METHOD_3_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0x8908630)
#define CLASS_3_FFBE09696B36D486_METHOD_3_50BC50621759ADE6_OFFSET UNITYSDK_OFFSET(0x89087C0)
#define CLASS_3_FFBE09696B36D486_METHOD_3_64EBEF26471EC26C_OFFSET UNITYSDK_OFFSET(0x8908530)
#define CLASS_3_FFBE09696B36D486_METHOD_3_6D3F81FA59FF88B6_OFFSET UNITYSDK_OFFSET(0x8908A80)
#define CLASS_3_FFBE09696B36D486_METHOD_3_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x8908D80)
#define CLASS_3_FFBE09696B36D486_METHOD_3_BD8BC8F0ED711A30_OFFSET UNITYSDK_OFFSET(0x89083B0)
#define CLASS_3_FFBE09696B36D486_SET_ALLCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x8908E20)
#define CLASS_3_FFBE09696B36D486_SET_SHOWCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x8908E40)
#define CLASS_3_FFBE09696B36D486__CTOR_OFFSET UNITYSDK_OFFSET(0x89084A0)

inline static constexpr unsigned int Class_3_FFBE09696B36D486_TypeDefinitionIndex = 60934;

class Class_3_FFBE09696B36D486 : public ::Class_2_3DE15EA7F53A0550
{
public:
	::RPG::Client::MVVM::Service::LimaoNewsPostService* Field_3_3; // 0x18
	::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>* _AllCommentViewModels_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>* _ShowCommentViewModels_k__BackingField; // 0x28
	::System::UInt32 Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFBE09696B36D486__CTOR_OFFSET))(this);
	}

	static ::Class_3_FFBE09696B36D486* Method_3_BD8BC8F0ED711A30()
	{
		return ((::Class_3_FFBE09696B36D486*(*)())((::PBYTE)hIl2Cpp + CLASS_3_FFBE09696B36D486_METHOD_3_BD8BC8F0ED711A30_OFFSET))();
	}

	::System::Void Method_3_64EBEF26471EC26C(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_FFBE09696B36D486_METHOD_3_64EBEF26471EC26C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_50BC50621759ADE6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFBE09696B36D486_METHOD_3_50BC50621759ADE6_OFFSET))(this);
	}

	::System::Void Method_3_0D4D447F31661D06(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FFBE09696B36D486_METHOD_3_0D4D447F31661D06_OFFSET))(this, a1);
	}

	::System::Void Method_3_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FFBE09696B36D486_METHOD_3_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	::Class_3_002145AD8E0A4DB8* Method_3_6D3F81FA59FF88B6(::System::UInt32 a1)
	{
		return ((::Class_3_002145AD8E0A4DB8*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FFBE09696B36D486_METHOD_3_6D3F81FA59FF88B6_OFFSET))(this, a1);
	}

	::System::Void Method_3_21378A7EB1BCB13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFBE09696B36D486_METHOD_3_21378A7EB1BCB13B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>* get_AllCommentViewModels()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFBE09696B36D486_GET_ALLCOMMENTVIEWMODELS_OFFSET))(this);
	}

	::System::Void set_AllCommentViewModels(::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>*))((::PBYTE)hIl2Cpp + CLASS_3_FFBE09696B36D486_SET_ALLCOMMENTVIEWMODELS_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>* get_ShowCommentViewModels()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFBE09696B36D486_GET_SHOWCOMMENTVIEWMODELS_OFFSET))(this);
	}

	::System::Void set_ShowCommentViewModels(::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>*))((::PBYTE)hIl2Cpp + CLASS_3_FFBE09696B36D486_SET_SHOWCOMMENTVIEWMODELS_OFFSET))(this, value);
	}
};
