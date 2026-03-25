#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::Model { class LimaoNewsPostData; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9A8DD40)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE___C__DISPLAYCLASS27_0___GETPOSTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9A8DD50)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsPostService___c__DisplayClass27_0_TypeDefinitionIndex = 61042;

	class LimaoNewsPostService___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::UInt32 postID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetPostData_b__0(::RPG::Client::MVVM::Model::LimaoNewsPostData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE___C__DISPLAYCLASS27_0___GETPOSTDATA_B__0_OFFSET))(this, x);
		}
	};
}
