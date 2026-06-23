#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E69A95C1519E03CD.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_63D18ECF87218619_2;
namespace MoleMole::GalGame { class GalPlayStoryNode; }
namespace MoleMole::GalGame { class GalScript; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace miHoYoEmotion { class SequenceBakeData; }

#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_176B2302E43E6714_OFFSET UNITYSDK_OFFSET(0x1A505A00)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1A505C00)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_333EBEF2DE915430_OFFSET UNITYSDK_OFFSET(0x1A503D50)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1A5053D0)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A504350)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_3BEBB575EF58269C_OFFSET UNITYSDK_OFFSET(0x1A504440)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_86F97410E5D3F801_OFFSET UNITYSDK_OFFSET(0x1A503F30)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_9A6DA36CCAE7D188_1_OFFSET UNITYSDK_OFFSET(0x1A504300)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x1A504020)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x1A503ED0)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_A55453DFDCADE7E5_OFFSET UNITYSDK_OFFSET(0x1A504390)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1A505410)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_B9999439DB2F3546_OFFSET UNITYSDK_OFFSET(0x1A505AB0)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_DC8418F763882D67_OFFSET UNITYSDK_OFFSET(0x1A5055D0)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_E278C67D79768E25_OFFSET UNITYSDK_OFFSET(0x1A504070)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_ED18D0F433EED9D3_OFFSET UNITYSDK_OFFSET(0x1A505790)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x1A504270)
#define CLASS_1_BE94BBD8E05AB4A9_METHOD_1_FBB3854A1A275365_OFFSET UNITYSDK_OFFSET(0x1A503AD0)
#define CLASS_1_BE94BBD8E05AB4A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A503AC0)

inline static constexpr unsigned int Class_1_BE94BBD8E05AB4A9_TypeDefinitionIndex = 73489;

class Class_1_BE94BBD8E05AB4A9 : public ::System::Object
{
public:
	::MoleMole::GalGame::GalScript* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_63D18ECF87218619_2*>* Field_1_1; // 0x18
	::System::Action* Field_1_10; // 0x20
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_63D18ECF87218619_2*>*>* Field_1_3; // 0x28
	::System::Action* Field_1_9; // 0x30
	::System::Action_1<::Class_1_63D18ECF87218619_2*>* Field_1_11; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::miHoYoEmotion::SequenceBakeData*>* Field_1_5; // 0x40
	::Class_1_63D18ECF87218619_2* Field_1_4; // 0x48
	::System::Int32 Field_1_2; // 0x50
	::System::Boolean Field_1_7; // 0x54
	::System::Boolean Field_1_8; // 0x55
	::System::Int32 Field_1_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_FBB3854A1A275365(::MoleMole::GalGame::GalPlayStoryNode* a1, ::Foundation::AssetRequestHandle& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayStoryNode*, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_FBB3854A1A275365_OFFSET))(this, a1, a2);
	}

	::Class_1_63D18ECF87218619_2* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_63D18ECF87218619_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_1_86F97410E5D3F801(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_63D18ECF87218619_2*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_63D18ECF87218619_2*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_86F97410E5D3F801_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	static ::System::String* Method_1_333EBEF2DE915430(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_333EBEF2DE915430_OFFSET))(a1);
	}

	::System::Boolean Method_1_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_F39234F2606D8D97_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_9A6DA36CCAE7D188_1_OFFSET))(this);
	}

	static ::System::String* Method_1_E278C67D79768E25(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_E278C67D79768E25_OFFSET))(a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_A55453DFDCADE7E5(::System::Collections::Generic::List_1<::Class_1_63D18ECF87218619_2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_63D18ECF87218619_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_A55453DFDCADE7E5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BEBB575EF58269C(::System::String* a1, ::MoleMole::GalGame::GalScript* a2, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::GalGame::GalScript*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_3BEBB575EF58269C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_DC8418F763882D67(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_DC8418F763882D67_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED18D0F433EED9D3(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_ED18D0F433EED9D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_176B2302E43E6714(::Enum_3_E69A95C1519E03CD a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E69A95C1519E03CD))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_176B2302E43E6714_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9999439DB2F3546()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_B9999439DB2F3546_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE94BBD8E05AB4A9_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
