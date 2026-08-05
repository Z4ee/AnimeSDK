#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_7FC98B52833961D9_METHOD_2_ECACF35FC5589571_OFFSET UNITYSDK_OFFSET(0x18C434F0)
#define CLASS_2_7FC98B52833961D9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18C43460)
#define CLASS_2_7FC98B52833961D9__CTOR_OFFSET UNITYSDK_OFFSET(0x18C433D0)

inline static constexpr unsigned int Class_2_7FC98B52833961D9_TypeDefinitionIndex = 52854;

class Class_2_7FC98B52833961D9 : public ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DownloadFileInfo*>
{
public:
	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7FC98B52833961D9__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Collections::Generic::IDictionary_2<::System::String*, ::MoleMole::DownloadFileInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::MoleMole::DownloadFileInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_7FC98B52833961D9__CTOR_1_OFFSET))(this, a1);
	}

	static ::Class_2_7FC98B52833961D9* Method_2_ECACF35FC5589571(::System::Collections::Generic::IEnumerable_1<::MoleMole::DownloadFileInfo*>*& a1)
	{
		return ((::Class_2_7FC98B52833961D9*(*)(::System::Collections::Generic::IEnumerable_1<::MoleMole::DownloadFileInfo*>*&))((::PBYTE)hIl2Cpp + CLASS_2_7FC98B52833961D9_METHOD_2_ECACF35FC5589571_OFFSET))(a1);
	}
};
