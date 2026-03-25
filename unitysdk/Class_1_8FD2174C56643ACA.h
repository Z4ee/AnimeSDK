#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarComparer; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8FD2174C56643ACA_METHOD_1_61CFD55E600BFB4C_OFFSET UNITYSDK_OFFSET(0xFB79270)
#define CLASS_1_8FD2174C56643ACA_METHOD_1_750CB543DF184FE0_OFFSET UNITYSDK_OFFSET(0xFB79200)
#define CLASS_1_8FD2174C56643ACA_METHOD_1_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0xFB790D0)
#define CLASS_1_8FD2174C56643ACA_METHOD_1_A8671C6302C7FA9E_OFFSET UNITYSDK_OFFSET(0xFB79140)
#define CLASS_1_8FD2174C56643ACA__CTOR_OFFSET UNITYSDK_OFFSET(0xFB79450)

inline static constexpr unsigned int Class_1_8FD2174C56643ACA_TypeDefinitionIndex = 50973;

class Class_1_8FD2174C56643ACA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::IAvatarComparer*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FD2174C56643ACA__CTOR_OFFSET))(this);
	}

	::Class_1_8FD2174C56643ACA* Method_1_82ABFE24D5168B0C()
	{
		return ((::Class_1_8FD2174C56643ACA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FD2174C56643ACA_METHOD_1_82ABFE24D5168B0C_OFFSET))(this);
	}

	::Class_1_8FD2174C56643ACA* Method_1_A8671C6302C7FA9E(::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>* a1, ::System::Boolean a2)
	{
		return ((::Class_1_8FD2174C56643ACA*(*)(::PVOID, ::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8FD2174C56643ACA_METHOD_1_A8671C6302C7FA9E_OFFSET))(this, a1, a2);
	}

	::Class_1_8FD2174C56643ACA* Method_1_750CB543DF184FE0(::RPG::Client::IAvatarComparer* a1)
	{
		return ((::Class_1_8FD2174C56643ACA*(*)(::PVOID, ::RPG::Client::IAvatarComparer*))((::PBYTE)hIl2Cpp + CLASS_1_8FD2174C56643ACA_METHOD_1_750CB543DF184FE0_OFFSET))(this, a1);
	}

	::RPG::Client::IAvatarComparer* Method_1_61CFD55E600BFB4C()
	{
		return ((::RPG::Client::IAvatarComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FD2174C56643ACA_METHOD_1_61CFD55E600BFB4C_OFFSET))(this);
	}
};
