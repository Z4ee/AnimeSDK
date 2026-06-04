#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace RPG::Client { class PhotoGraphFilterImage; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS131_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC3A16D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS131_0__SAVESCREENCAPTURE_B__0_OFFSET UNITYSDK_OFFSET(0xC3A34A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS131_0__SAVESCREENCAPTURE_B__1_OFFSET UNITYSDK_OFFSET(0xC3A3580)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c__DisplayClass131_0_TypeDefinitionIndex = 64937;

	class PhotoGraphUtils___c__DisplayClass131_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::RPG::Client::PhotoGraphFilterImage* image; // 0x18
		::System::Action_1<::System::Boolean>* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS131_0__CTOR_OFFSET))(this);
		}

		::System::Void _SaveScreenCapture_b__0(::Unity::Collections::NativeArray_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS131_0__SAVESCREENCAPTURE_B__0_OFFSET))(this, a1);
		}

		::System::Void _SaveScreenCapture_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS131_0__SAVESCREENCAPTURE_B__1_OFFSET))(this, a1);
		}
	};
}
