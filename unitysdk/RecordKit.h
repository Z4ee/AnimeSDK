#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class RecordKit_RecordNode;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RECORDKIT_CONTAINKEY_OFFSET UNITYSDK_OFFSET(0x1DDB1030)
#define RECORDKIT_DELETEALL_OFFSET UNITYSDK_OFFSET(0x1DDB1470)
#define RECORDKIT_DELETE_OFFSET UNITYSDK_OFFSET(0x1DDB1290)
#define RECORDKIT_GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1DDB1250)
#define RECORDKIT_GET_RECORDROOTPATH_OFFSET UNITYSDK_OFFSET(0x1DDB0E50)
#define RECORDKIT_SAVE_OFFSET UNITYSDK_OFFSET(0x1DDB15A0)
#define RECORDKIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB1720)
#define RECORDKIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB1710)

inline static constexpr unsigned int RecordKit_TypeDefinitionIndex = 8261;

class RecordKit : public ::System::Object
{
public:
	static ::System::String** StaticGet_m_recordPath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RecordKit_TypeDefinitionIndex)->GetStaticField(0x6B90);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RecordKit_RecordNode*>** StaticGet_recordDic()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RecordKit_RecordNode*>**)Il2CppClass::FromTypeDefinitionIndex(RecordKit_TypeDefinitionIndex)->GetStaticField(0x6B98);
	}
	// static const ::System::String* EXTENSION; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORDKIT__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RECORDKIT__CCTOR_OFFSET))();
	}

	static ::System::String* get_RecordRootPath()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RECORDKIT_GET_RECORDROOTPATH_OFFSET))();
	}

	static ::System::Boolean ContainKey(::System::String* key)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RECORDKIT_CONTAINKEY_OFFSET))(key);
	}

	static ::System::Void Delete(::System::String* key)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RECORDKIT_DELETE_OFFSET))(key);
	}

	static ::System::Void DeleteAll()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RECORDKIT_DELETEALL_OFFSET))();
	}

	static ::System::Void Save(::System::String* uid)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RECORDKIT_SAVE_OFFSET))(uid);
	}

	static ::System::String* GetUniqueID(::System::String* key)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RECORDKIT_GETUNIQUEID_OFFSET))(key);
	}
};
