#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DLinkRegistry_Entry.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UI3DLINKREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B137AF0)
#define RPG_CLIENT_UI3DLINKREGISTRY_DISTINCTUI3DCOUNT_OFFSET UNITYSDK_OFFSET(0x1B137830)
#define RPG_CLIENT_UI3DLINKREGISTRY_GETORDEREDUI3DS_OFFSET UNITYSDK_OFFSET(0x1B137690)
#define RPG_CLIENT_UI3DLINKREGISTRY_GETSECONDTOPUI3D_OFFSET UNITYSDK_OFFSET(0x1B1375C0)
#define RPG_CLIENT_UI3DLINKREGISTRY_GETTOPLINKEDUI2D_OFFSET UNITYSDK_OFFSET(0x1B12A7F0)
#define RPG_CLIENT_UI3DLINKREGISTRY_GETTOPUI3D_OFFSET UNITYSDK_OFFSET(0x1B137540)
#define RPG_CLIENT_UI3DLINKREGISTRY_GETUI2DS_OFFSET UNITYSDK_OFFSET(0x1B1288A0)
#define RPG_CLIENT_UI3DLINKREGISTRY_GETUI3D_OFFSET UNITYSDK_OFFSET(0x1B1374A0)
#define RPG_CLIENT_UI3DLINKREGISTRY_LINKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B1379F0)
#define RPG_CLIENT_UI3DLINKREGISTRY_LINKSTANDALONE_OFFSET UNITYSDK_OFFSET(0x1B137060)
#define RPG_CLIENT_UI3DLINKREGISTRY_LINK_OFFSET UNITYSDK_OFFSET(0x1B136E50)
#define RPG_CLIENT_UI3DLINKREGISTRY_PEEKTOPUI3DWITHOUTUI2D_OFFSET UNITYSDK_OFFSET(0x1B137930)
#define RPG_CLIENT_UI3DLINKREGISTRY_UNLINKALL_OFFSET UNITYSDK_OFFSET(0x1B137340)
#define RPG_CLIENT_UI3DLINKREGISTRY_UNLINK_OFFSET UNITYSDK_OFFSET(0x1B137270)
#define RPG_CLIENT_UI3DLINKREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B137BC0)
#define RPG_CLIENT_UI3DLINKREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B137B60)
#define RPG_CLIENT_UI3DLINKREGISTRY__INDEXOFSTANDALONE_OFFSET UNITYSDK_OFFSET(0x1B1371A0)
#define RPG_CLIENT_UI3DLINKREGISTRY__INDEXOFUI2D_OFFSET UNITYSDK_OFFSET(0x1B136FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DLinkRegistry_TypeDefinitionIndex = 72920;

	class UI3DLinkRegistry : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::UIController*>** StaticGet__EmptyUI2DList()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::UIController*>**)Il2CppClass::FromTypeDefinitionIndex(UI3DLinkRegistry_TypeDefinitionIndex)->GetStaticField(0x5F870);
		}
		::System::Collections::Generic::List_1<::RPG::Client::UI3DLinkRegistry_Entry>* _Links; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY__CCTOR_OFFSET))();
		}

		::System::Void Link(::RPG::Client::UIController* a1, ::RPG::Client::IUI3DController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::IUI3DController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_LINK_OFFSET))(this, a1, a2);
		}

		::System::Void LinkStandalone(::RPG::Client::IUI3DController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IUI3DController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_LINKSTANDALONE_OFFSET))(this, a1);
		}

		::System::Void Unlink(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_UNLINK_OFFSET))(this, a1);
		}

		::System::Void UnlinkAll(::RPG::Client::IUI3DController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IUI3DController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_UNLINKALL_OFFSET))(this, a1);
		}

		::RPG::Client::IUI3DController* GetUI3D(::RPG::Client::UIController* a1)
		{
			return ((::RPG::Client::IUI3DController*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_GETUI3D_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::UIController*>* GetUI2Ds(::RPG::Client::IUI3DController* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::UIController*>*(*)(::PVOID, ::RPG::Client::IUI3DController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_GETUI2DS_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* GetTopLinkedUI2D(::RPG::Client::IUI3DController* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::IUI3DController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_GETTOPLINKEDUI2D_OFFSET))(this, a1);
		}

		::RPG::Client::IUI3DController* GetTopUI3D()
		{
			return ((::RPG::Client::IUI3DController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_GETTOPUI3D_OFFSET))(this);
		}

		::RPG::Client::IUI3DController* GetSecondTopUI3D()
		{
			return ((::RPG::Client::IUI3DController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_GETSECONDTOPUI3D_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IUI3DController*>* GetOrderedUI3Ds()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IUI3DController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_GETORDEREDUI3DS_OFFSET))(this);
		}

		::System::Int32 DistinctUI3DCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_DISTINCTUI3DCOUNT_OFFSET))(this);
		}

		::RPG::Client::IUI3DController* PeekTopUI3DWithoutUI2D(::RPG::Client::UIController* a1)
		{
			return ((::RPG::Client::IUI3DController*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_PEEKTOPUI3DWITHOUTUI2D_OFFSET))(this, a1);
		}

		::System::Int32 LinkCount(::RPG::Client::IUI3DController* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IUI3DController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_LINKCOUNT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_CLEAR_OFFSET))(this);
		}

		::System::Int32 _IndexOfUI2D(::RPG::Client::UIController* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY__INDEXOFUI2D_OFFSET))(this, a1);
		}

		::System::Int32 _IndexOfStandalone(::RPG::Client::IUI3DController* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IUI3DController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY__INDEXOFSTANDALONE_OFFSET))(this, a1);
		}
	};
}
