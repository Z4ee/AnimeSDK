#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E77EE8BE0A609DD9.h"

class Class_1_029A7EDCBF9933C8;
namespace RPG::Client::MVVM::Service { class LimaoNewsNetworkService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsPostService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsWindowService; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsPostViewModel; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsWebsiteViewModelParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D975C797957E43FF_METHOD_3_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x9A39860)
#define CLASS_3_D975C797957E43FF_METHOD_3_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x9A39310)
#define CLASS_3_D975C797957E43FF_METHOD_3_793B82D154222869_OFFSET UNITYSDK_OFFSET(0x9A38DA0)
#define CLASS_3_D975C797957E43FF_METHOD_3_7BB95BA712DE5299_OFFSET UNITYSDK_OFFSET(0x9A38CB0)
#define CLASS_3_D975C797957E43FF_METHOD_3_8CABAFC439FA7975_OFFSET UNITYSDK_OFFSET(0x9A39360)
#define CLASS_3_D975C797957E43FF_METHOD_3_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x9A39A50)
#define CLASS_3_D975C797957E43FF_METHOD_3_A7CA05FB73EE4ADB_OFFSET UNITYSDK_OFFSET(0x9A39020)
#define CLASS_3_D975C797957E43FF_METHOD_3_B6648959BC9C9998_1_OFFSET UNITYSDK_OFFSET(0x9A396C0)
#define CLASS_3_D975C797957E43FF_METHOD_3_B6648959BC9C9998_OFFSET UNITYSDK_OFFSET(0x9A39520)
#define CLASS_3_D975C797957E43FF_METHOD_3_C495FC84AA2302E0_OFFSET UNITYSDK_OFFSET(0x9A39A00)
#define CLASS_3_D975C797957E43FF_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9A394E0)
#define CLASS_3_D975C797957E43FF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9A38D50)
#define CLASS_3_D975C797957E43FF_METHOD_3_F8BD1EE45AB650CA_OFFSET UNITYSDK_OFFSET(0x9A39180)
#define CLASS_3_D975C797957E43FF__CREATESHOWPOSTVIEWMODELS_B__2_0_OFFSET UNITYSDK_OFFSET(0x9A39B60)
#define CLASS_3_D975C797957E43FF__CTOR_OFFSET UNITYSDK_OFFSET(0x9A38C50)

inline static constexpr unsigned int Class_3_D975C797957E43FF_TypeDefinitionIndex = 68402;

class Class_3_D975C797957E43FF : public ::Class_2_E77EE8BE0A609DD9
{
public:
	::RPG::Client::MVVM::Service::LimaoNewsNetworkService* Field_3_4; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*>* Field_3_0; // 0x28
	::Class_1_029A7EDCBF9933C8* Field_3_8; // 0x30
	::RPG::Client::MVVM::Service::LimaoNewsWindowService* Field_3_6; // 0x38
	::RPG::Client::MVVM::Service::LimaoNewsPostService* Field_3_5; // 0x40
	::System::UInt32 Field_3_7; // 0x48
	::System::UInt32 Field_3_9; // 0x4C
	::System::UInt32 Field_3_1; // 0x50
	::System::Boolean Field_3_3; // 0x54
	::System::Boolean Field_3_2; // 0x55

	::System::Void _ctor(::RPG::Client::MVVM::Service::LimaoNewsNetworkService* a1, ::RPG::Client::MVVM::Service::LimaoNewsPostService* a2, ::RPG::Client::MVVM::Service::LimaoNewsWindowService* a3, ::Class_1_029A7EDCBF9933C8* a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsNetworkService*, ::RPG::Client::MVVM::Service::LimaoNewsPostService*, ::RPG::Client::MVVM::Service::LimaoNewsWindowService*, ::Class_1_029A7EDCBF9933C8*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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
