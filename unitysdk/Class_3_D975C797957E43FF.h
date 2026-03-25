#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"

class Class_1_0BA5D98E0F73DDB8;
namespace RPG::Client::MVVM::Service { class LimaoNewsNetworkService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsPostService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsWindowService; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsPostViewModel; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsWebsiteViewModelParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D975C797957E43FF_METHOD_3_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x11131CA0)
#define CLASS_3_D975C797957E43FF_METHOD_3_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x11131750)
#define CLASS_3_D975C797957E43FF_METHOD_3_793B82D154222869_OFFSET UNITYSDK_OFFSET(0x111311E0)
#define CLASS_3_D975C797957E43FF_METHOD_3_7BB95BA712DE5299_OFFSET UNITYSDK_OFFSET(0x111310F0)
#define CLASS_3_D975C797957E43FF_METHOD_3_8CABAFC439FA7975_OFFSET UNITYSDK_OFFSET(0x111317A0)
#define CLASS_3_D975C797957E43FF_METHOD_3_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x11131E90)
#define CLASS_3_D975C797957E43FF_METHOD_3_A7CA05FB73EE4ADB_OFFSET UNITYSDK_OFFSET(0x11131460)
#define CLASS_3_D975C797957E43FF_METHOD_3_B6648959BC9C9998_1_OFFSET UNITYSDK_OFFSET(0x11131B00)
#define CLASS_3_D975C797957E43FF_METHOD_3_B6648959BC9C9998_OFFSET UNITYSDK_OFFSET(0x11131960)
#define CLASS_3_D975C797957E43FF_METHOD_3_C495FC84AA2302E0_OFFSET UNITYSDK_OFFSET(0x11131E40)
#define CLASS_3_D975C797957E43FF_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11131920)
#define CLASS_3_D975C797957E43FF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11131190)
#define CLASS_3_D975C797957E43FF_METHOD_3_F8BD1EE45AB650CA_OFFSET UNITYSDK_OFFSET(0x111315C0)
#define CLASS_3_D975C797957E43FF__CREATESHOWPOSTVIEWMODELS_B__2_0_OFFSET UNITYSDK_OFFSET(0x11131FA0)
#define CLASS_3_D975C797957E43FF__CTOR_OFFSET UNITYSDK_OFFSET(0x11131090)

inline static constexpr unsigned int Class_3_D975C797957E43FF_TypeDefinitionIndex = 60951;

class Class_3_D975C797957E43FF : public ::Class_2_3DE15EA7F53A0550
{
public:
	::Class_1_0BA5D98E0F73DDB8* Field_3_8; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*>* Field_3_0; // 0x20
	::RPG::Client::MVVM::Service::LimaoNewsWindowService* Field_3_6; // 0x28
	::RPG::Client::MVVM::Service::LimaoNewsNetworkService* Field_3_4; // 0x30
	::RPG::Client::MVVM::Service::LimaoNewsPostService* Field_3_5; // 0x38
	::System::UInt32 Field_3_9; // 0x40
	::System::UInt32 Field_3_1; // 0x44
	::System::Boolean Field_3_2; // 0x48
	::System::Boolean Field_3_3; // 0x49
	::System::UInt32 Field_3_7; // 0x4C

	::System::Void _ctor(::RPG::Client::MVVM::Service::LimaoNewsNetworkService* a1, ::RPG::Client::MVVM::Service::LimaoNewsPostService* a2, ::RPG::Client::MVVM::Service::LimaoNewsWindowService* a3, ::Class_1_0BA5D98E0F73DDB8* a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsNetworkService*, ::RPG::Client::MVVM::Service::LimaoNewsPostService*, ::RPG::Client::MVVM::Service::LimaoNewsWindowService*, ::Class_1_0BA5D98E0F73DDB8*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_7BB95BA712DE5299(::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_7BB95BA712DE5299_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*>* Method_3_793B82D154222869()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_793B82D154222869_OFFSET))(this);
	}

	::System::Void Method_3_A7CA05FB73EE4ADB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_A7CA05FB73EE4ADB_OFFSET))(this, a1);
	}

	::System::Void Method_3_F8BD1EE45AB650CA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_F8BD1EE45AB650CA_OFFSET))(this, a1);
	}

	::System::Void Method_3_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_775B6D644F07B554_OFFSET))(this);
	}

	::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* Method_3_8CABAFC439FA7975(::System::UInt32 a1)
	{
		return ((::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_8CABAFC439FA7975_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::UInt32 Method_3_B6648959BC9C9998()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_B6648959BC9C9998_OFFSET))(this);
	}

	::System::UInt32 Method_3_B6648959BC9C9998_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_B6648959BC9C9998_1_OFFSET))(this);
	}

	::System::Void Method_3_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_55B8349E0B606444_OFFSET))(this);
	}

	::System::Void Method_3_C495FC84AA2302E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_C495FC84AA2302E0_OFFSET))(this);
	}

	::System::Boolean Method_3_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF_METHOD_3_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::System::Int32 _CreateShowPostViewModels_b__2_0(::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* x, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* y)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF__CREATESHOWPOSTVIEWMODELS_B__2_0_OFFSET))(this, x, y);
	}
};
